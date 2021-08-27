from typing import List

from lib.problem.base import Problem


class Solution(object):
    def __init__(self,
                 problem: Problem,
                 tags: List[str] = [],
                 codes: List[List[str]] = [[]],
                 time_complexity: List[str] = [],
                 space_complexity: List[str] = [],
                 judge_time: List[str] = [],
                 judge_memory: List[str] = [],
                 judge_solution_status: List[str] = [],
                 judge_test_status: List[str] = []):
        """


        """
        self.problem = problem
        self.tags = tags
        self.codes = codes
        self.time_complexity = time_complexity
        self.space_complexity = space_complexity
        self.judge_time = judge_time
        self.judge_memory = judge_memory
        self.judge_solution_status = judge_solution_status
        self.judge_test_status = judge_test_status
