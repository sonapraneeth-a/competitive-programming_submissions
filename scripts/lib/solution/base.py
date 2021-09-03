from typing import List

from lib.problem.base import Problem


class Solution(object):
    def __init__(self,
                 problem: Problem,
                 identifier: int,
                 tags: List[str] = [],
                 categories: List[str] = [],
                 code: List[str] = [],
                 time_complexity: str = "",
                 space_complexity: str = "",
                 judge_submission_link: str = "",
                 judge_runtime: str = "",
                 judge_memory_usage: str = "",
                 judge_submission_status: str = "",
                 judge_testcase_status: str = ""):
        """

        Parameters
        ----------
        problem: problem info
        identifier: identifier for solution
        tags: tags related to the solution
        categories: categories related to the solution
        code: actual solution
        time_complexity: time complexity of the solution
        space_complexity: space complexity of the solution
        judge_submission_link: link for submission
        judge_runtime: actual time taken to run code on judge
        judge_memory_usage: actual memory consumed by code on judge
        judge_submission_status: Accepted/TLE/RE/Compile Error
        judge_testcase_status: number of tests passed in total
        """
        self.problem = problem
        self.identifier = identifier
        self.tags = tags
        self.categories = categories
        self.code = code
        self.judge_submission_link = judge_submission_link
        self.time_complexity = time_complexity
        self.space_complexity = space_complexity
        self.judge_runtime = judge_runtime
        self.judge_memory_usage = judge_memory_usage
        self.judge_submission_status = judge_submission_status
        self.judge_testcase_status = judge_testcase_status
        self.judge_memory_usage_value = ""
        self.judge_memory_usage_performance = ""
        self.judge_runtime_value = ""
        self.judge_runtime_performance = ""
        if problem.platform.lower() == "leetcode":
            self.judge_runtime_value = self.judge_runtime.split(',')[0]
            self.judge_runtime_performance = "> " + \
                                             self.judge_runtime.split(',')[
                                                 -1].replace("faster than",
                                                             "").strip()
            self.judge_memory_usage_value = self.judge_memory_usage.split(',')[
                0]
            self.judge_memory_usage_performance = "< " + \
                                                  self.judge_memory_usage.split(
                                                      ',')[-1].replace(
                                                      "less than", "").strip()

    def __str__(self):
        answer = "--- Solution {0} ---\n".format(self.identifier)
        answer += "      Submission link: '{0}'\n".format(
            self.judge_submission_link)
        answer += "               Status: '{0}'\n".format(
            self.judge_submission_status)
        answer += "         Status tests: '{0}'\n".format(
            self.judge_testcase_status)
        # answer += "              Runtime: '{0}'\n".format(self.judge_runtime)
        answer += "        Runtime value: '{0}'\n".format(
            self.judge_runtime_value)
        answer += "      Runtime percent: '{0}'\n".format(
            self.judge_runtime_performance)
        # answer += "         Memory usage: '{0}'\n".format(
        #     self.judge_memory_usage)
        answer += "   Memory usage value: '{0}'\n".format(
            self.judge_memory_usage_value)
        answer += " Memory usage percent: '{0}'\n".format(
            self.judge_memory_usage_performance)
        answer += "      Time complexity: '{0}'\n".format(self.time_complexity)
        answer += "     Space complexity: '{0}'\n".format(self.space_complexity)
        answer += "                 Tags: '{0}'\n".format(",".join(self.tags))
        answer += "           Categories: '{0}'\n".format(
            ",".join(self.categories))
        return answer
