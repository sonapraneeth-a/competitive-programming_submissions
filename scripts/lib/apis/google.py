from typing import Dict, List

from lib.apis.base import BaseApi, make_api_call, ApiEnum
from lib.problem.base import Problem
from lib.problem.google import GoogleProblem


class GoogleApi(BaseApi):
    """Class handling requests to Google API

    Uses plain requests
    """

    def __init__(self, quiet: bool = True):
        """

        Parameters
        ----------
        quiet
        """
        super().__init__(quiet=quiet, levels=[],
                         colors=[])
        # URLs
        self.url_problems = 'https://codejam.googleapis.com/poll?p=e30'
        self.url_contest = \
            'https://codejam.googleapis.com/dashboard/{0}/poll?p=e30'
        # Filename formats
        self.filename_questions = \
            "logs/google/{0}/questions/{1}__{2}.json"
        self.filename_problems = "logs/google/{0}/problems.json"

    def get_question_info(self, problem: Problem,
                          force: bool = False) -> dict:
        """

        Parameters
        ----------
        problem:
        force: bool

        Returns
        -------
        dict:
        """
        if problem.platform.lower() != "google":
            print("This Api can be used only for LeetCode problems")
            exit(1)
        response = make_api_call(url=self.url_question,
                                 filename=self.filename_questions
                                 .format(
                                     problem.contest_name,
                                     problem.identifier,
                                     problem.slug),
                                 api_type=ApiEnum.Default,
                                 force=force)
        if response is None:
            print(
                "Question data for {0} {1}. {2} could not be retrieved".format(
                    problem.contest_name, problem.identifier, problem.title))
        return {}

    def get_algorithm_problems(self, force: bool = False) -> (
        List[GoogleProblem], Dict):
        """

        Parameters
        ----------
        force: bool

        Returns
        -------
        Tuple(List[GoogleKickstartProblem], Dict)
        """
        pass
