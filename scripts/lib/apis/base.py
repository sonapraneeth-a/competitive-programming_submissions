import enum
import json
import os
import time
from datetime import datetime

import requests


class ApiEnum(enum.Enum):
    Default = 1
    GraphQL = 2


def make_api_call(url: str, filename: str,
                  api_type: ApiEnum = ApiEnum.Default,
                  headers=None, data=None, force: bool = False) -> dict:
    response = None
    if len(url) == 0:
        return {}
    if len(filename) == 0:
        force = True
    if api_type == ApiEnum.GraphQL:
        if headers is None or data is None:
            return {}
    current_timestamp = time.mktime(datetime.today().timetuple())
    if force or not os.path.exists(filename) or \
        (os.path.exists(filename) and
         current_timestamp - os.path.getmtime(filename) > 604800):
        if api_type == ApiEnum.GraphQL:
            response = requests.post(url, headers=headers,
                                     data=data).content
        else:
            response = requests.get(url).content
        response = json.loads(response)
        if not os.path.exists(os.path.dirname(filename)):
            os.makedirs(os.path.dirname(filename))
        with open(filename, "w") as write_file:
            json.dump(response, write_file)
    else:
        with open(filename, "r") as read_file:
            response = json.load(read_file)
    return response


class BaseApi(object):
    """

    """

    def __init__(self, levels=None, colors=None,
                 quiet: bool = False):
        self.levels = [] if levels is None else levels
        self.colors = [] if colors is None else colors
        if len(self.levels) != len(self.colors):
            print(
                "Levels and colors must be of same length. "
                "Levels: {0}, Colors: {0}"
                .format(self.levels, self.colors))
            exit(1)
        self.quiet = quiet

# class BaseApi(abc.ABC):
#     """
#
#     """
#
#     @classmethod
#     @abc.abstractmethod
#     def get_question_info(cls, problem: Problem, force: bool = False) -> dict:
#         pass
#
#     @classmethod
#     @abc.abstractmethod
#     def get_algorithm_problems(cls, force: bool = False) -> \
#             (List[Problem], dict):
#         pass
