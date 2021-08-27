import argparse
import json
import math
import os
import pathlib
import shutil
from datetime import date

from lib.apis.leetcode import LeetCodeApi
from lib.file.leetcode import check_file, read_solutions_file
from lib.problem.leetcode import LeetCodeProblem
from lib.solution.base import Solution

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    # positional argument
    parser.add_argument("-p", "--platform", default="LeetCode",
                        required=False,
                        help="Which platform the script should run? "
                             "Note: Input is case-sensitive "
                             "Example: LeetCode")
    # command line flags
    parser.add_argument("-q", "--quiet", action="store_true",
                        default=True,
                        help="suppress messages to stdout")
    # parse args
    args = parser.parse_args()
    print(args)
    if args.quiet:
        print("Running in Quiet Mode")

    if args.platform.lower() == "leetcode":
        leetcode = LeetCodeApi(args.quiet)
        algorithm_problems, _ = leetcode.get_algorithm_problems(force=False)
        algorithm_problems.sort(key=lambda x: int(x.identifier), reverse=False)
        for problem in algorithm_problems[:8]:
            print(problem)
        submit_directory = "..\\platforms\\leetcode\\practice"
        root = os.getcwd()
        print("Looking for attempted/solved problems")
        template_solutions_file_path = \
            "\\templates" + "\\leetcode\\" + "solutions.cpp"
        template_desc_file_path = \
            "\\templates" + "\\leetcode\\" + "description.md"
        for problem in algorithm_problems:
            if problem.is_premium:
                continue
            # print("Checking solutions.cpp for {0}. {1}"
            #       .format(problem.identifier, problem.title))
            is_attempted = check_file(
                problem, submit_directory, "solutions.cpp",
                root + template_solutions_file_path)
            if is_attempted:
                print("Attempted problem: {0}. {1}".format(
                    problem.identifier, problem.title))
            solution = read_solutions_file(problem=problem)
