import json
import os
from datetime import datetime
import time
from typing import Dict, List

import requests

from lib.apis.base import BaseApi, make_api_call, ApiEnum
from lib.problem.base import Problem
from lib.problem.leetcode import LeetCodeProblem


class LeetCodeApi(BaseApi):
    """Class handling requests to LeetCode API

    Uses graphql requests/plain requests
    """

    def __init__(self, quiet: bool = True):
        """

        Parameters
        ----------
        quiet
        """
        self.headers = {
            'authority': 'leetcode.com',
            'accept': 'application/json, text/javascript, */*; q=0.01',
            'x-newrelic-id': 'UAQDVFVRGwEAXVlbBAg=',
            'x-requested-with': 'XMLHttpRequest',
            'user-agent': 'Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.85 Safari/537.36',
            'content-type': 'application/json',
            'sec-gpc': '1',
            'sec-fetch-site': 'same-origin',
            'sec-fetch-mode': 'cors',
            'sec-fetch-dest': 'empty',
            'accept-language': 'en-US,en;q=0.9',
            'cookie': 'csrftoken=SYt4auAHmprCYhMeGDZwbnE0hWoSLKRLHb0A7mMpbvoAEPvjYcIdL5LtaWhQJv6B; __cfduid=dc8614cf2c524abada1e54cfa8e118d271619065816; __cf_bm=08dec7596eec629845d4f3f39086483d491e2c40-1619324757-1800-AYKgjE4h5oPn/k7bslI317JZOCKGqrKvRQEJSKFM8EyY57yFeDgrM0KTqzs/c5RUfzN8A7VceydacsvxJjrmrp4=',
        }
        super().__init__(quiet=quiet, levels=['Easy', 'Medium', 'Hard'],
                         colors=['rgb(67, 160, 71)',
                                 'rgb(239, 108, 0)', 'rgb(233, 30, 99)'])
        # URLs
        self.url_graphql = 'https://leetcode.com/graphql'
        self.url_problems = 'https://leetcode.com/api/problems/algorithms/'
        # Data
        self.graphql_questionData = '{{"operationName":"questionData","variables":{{"titleSlug":\"{0}\"}},"query":"query questionData($titleSlug: String!) {{\\n  question(titleSlug: $titleSlug) {{\\n    questionId\\n    questionFrontendId\\n    boundTopicId\\n    title\\n    titleSlug\\n    content\\n    translatedTitle\\n    translatedContent\\n    isPaidOnly\\n    difficulty\\n    likes\\n    dislikes\\n    isLiked\\n    similarQuestions\\n    exampleTestcases\\n    contributors {{\\n      username\\n      profileUrl\\n      avatarUrl\\n      __typename\\n    }}\\n    topicTags {{\\n      name\\n      slug\\n      translatedName\\n      __typename\\n    }}\\n    companyTagStats\\n    codeSnippets {{\\n      lang\\n      langSlug\\n      code\\n      __typename\\n    }}\\n    stats\\n    hints\\n    solution {{\\n      id\\n      canSeeDetail\\n      paidOnly\\n      hasVideoSolution\\n      paidOnlyVideo\\n      __typename\\n    }}\\n    status\\n    sampleTestCase\\n    metaData\\n    judgerAvailable\\n    judgeType\\n    mysqlSchemas\\n    enableRunCode\\n    enableTestMode\\n    enableDebugger\\n    envInfo\\n    libraryUrl\\n    adminUrl\\n    __typename\\n  }}\\n}}\\n"}}'
        # Filename formats
        self.filename_questionData = "logs/leetcode/questions/{0}__{1}.json"
        self.filename_problems = "logs/leetcode/problems-algorithms.json"

    def get_question_info(self, problem: Problem,
                          force: bool = False) -> dict:
        """

        Parameters
        ----------
        problem: str
        force: bool

        Returns
        -------
        dict:
        """
        if problem.platform.lower() != "leetcode":
            print("This Api can be used only for LeetCode problems")
            exit(1)
        response = make_api_call(url=self.url_graphql,
                                 filename=self.filename_questionData.format(
                                     problem.identifier,
                                     problem.slug),
                                 api_type=ApiEnum.GraphQL, headers=self.headers,
                                 data=self.graphql_questionData.format(
                                     problem.slug),
                                 force=force)
        if response is None:
            print("Question data for {0}. {1} could not be retrieved".format(
                problem.identifier, problem.title))
        question = response['data']
        # markdown = md(question['content'], heading_style="ATX")
        # content = question['content']
        # exampleTestcases = question['exampleTestcases']
        # codeSnippets = question['codeSnippets'][0]['code']
        # difficulty = question['difficulty']
        # topicTags = question['topicTags']
        # hints = question['hints']
        return question

    def get_algorithm_problems(self, force: bool = False) -> (
        List[LeetCodeProblem], Dict):
        """

        Parameters
        ----------
        force: bool

        Returns
        -------
        Tuple(List[LeetCodeProblem], Dict)
        """
        problems = []
        id_problem_dict = {}
        response = make_api_call(url=self.url_problems,
                                 filename=self.filename_problems,
                                 api_type=ApiEnum.Default,
                                 force=force)
        if response is None:
            print("Could not retrieve problems list")
            return
        for item in response['stat_status_pairs']:
            problem = LeetCodeProblem(
                identifier=item['stat']['frontend_question_id'],
                title=item['stat']['question__title'],
                slug=item['stat']['question__title_slug'],
                source_type='Practice',
                solution_slug=item['stat']['question__article__slug'],
                difficulty=self.levels[item['difficulty']['level'] - 1],
                status='na' if item['status'] is None else item['status'],
                is_premium=item['paid_only']
            )
            id_problem_dict[int(problem.identifier)] = problem
            problems.append(problem)
        if not self.quiet:
            print("There are total {0} problems in LeetCode Practice "
                  "in Algorithms category".format(len(problems)))
        return problems, id_problem_dict
