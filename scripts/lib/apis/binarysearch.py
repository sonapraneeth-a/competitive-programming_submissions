import json
import os
from datetime import datetime
import time
from typing import Dict, List

import requests

from lib.problem.base import Problem
from lib.problem.binarysearch import BinarySearchProblem


class BinarySearchApi:
    """Class handling requests to BinarySearch API

    Uses plain requests
    """

    def __init__(self, quiet: bool = True):
        """

        Parameters
        ----------
        quiet
        """
        self.levels = ['Easy', 'Medium', 'Hard', 'Harder']
        self.colors = ['rgb(67, 160, 71)',
                       'rgb(239, 108, 0)', 'rgb(233, 30, 99)', '']
        self.quiet = quiet

    def get_question_info(self, problem: Problem,
                          force: bool = False) -> Dict:
        """

        Parameters
        ----------
        problem:
        force: bool

        Returns
        -------
        Dict:
        """
        filename = "logs/binarysearch/questions/{0}__{1}.json".format(
            problem.identifier, problem.slug.replace("*", ""))
        api_string = \
            "https://binarysearch.com/api/publicquestions/?questionIds={0}"
        current_timestamp = time.mktime(datetime.today().timetuple())
        response = None
        if force or not os.path.exists(filename) or \
            (os.path.exists(filename) and
             current_timestamp - os.path.getmtime(filename) > 604800):
            response = json.loads(
                requests.get(api_string.format(problem.identifier)).content)
            with open(filename, "w") as write_file:
                json.dump(response, write_file)
        else:
            with open(filename, "r") as read_file:
                response = json.load(read_file)
        question = response
        return question

    def get_algorithm_problems(self, force: bool = False) -> (
        List[BinarySearchProblem], Dict):
        """

        Parameters
        ----------
        force: bool

        Returns
        -------
        Tuple(List[BinarySearchProblem], Dict)
        """
        filename = "logs/binarysearch/problems.json"
        problems = []
        id_problem_dict = {}
        response = []
        api_string = \
            "https://binarysearch.com/api/questionlist?list&orderBy=id&page={0}"
        current_timestamp = time.mktime(datetime.today().timetuple())
        # 1 week
        if force or not os.path.exists(filename) or \
            (os.path.exists(filename) and
             current_timestamp - os.path.getmtime(filename) > 604800):
            if not self.quiet:
                print("Querying from API")
            page_no = 0
            while True:
                page_response = json.loads(
                    requests.get(api_string.format(page_no)).content)
                if len(page_response["questions"]) == 0:
                    break
                for question in page_response["questions"]:
                    response.append(question)
                page_no += 1
            with open(filename, "w") as write_file:
                json.dump(response, write_file)
        else:
            if not self.quiet:
                print("Reading from file: {0}".format(filename))
            with open(filename, "r") as read_file:
                response = json.load(read_file)
        if response is None:
            print("Unable to retrieve info")
            return
        for item in response:
            problem = BinarySearchProblem(
                identifier=item['id'],
                title=item['title'],
                slug=item['slug'],
                source_type='Practice',
                difficulty=self.levels[item['difficulty']],
                status='na',
                is_premium=False
            )
            id_problem_dict[int(problem.identifier)] = problem
            problems.append(problem)
        if not self.quiet:
            print("There are total {0} problems in BinarySearch Practice."
                  .format(len(problems)))
        return problems, id_problem_dict
