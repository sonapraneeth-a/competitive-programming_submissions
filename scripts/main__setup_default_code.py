import argparse
import json
import math
import os
import pathlib
import shutil
from datetime import date

from lib.apis.leetcode import LeetCodeApi
from lib.file.leetcode import create_file
from lib.problem.leetcode import LeetCodeProblem

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("-p", "--platform", default="LeetCode",
                        required=False,
                        help="Which platform the script should run? "
                             "Note: Input is case-sensitive "
                             "Default: LeetCode")
    parser.add_argument("-o", "--overwrite", action="store_true",
                        default=False,
                        help="Overwrite files if the file is not updated or the"
                             "file does not exist. If True, overwites all files."
                             "Default: False")
    parser.add_argument("-c", "--count", type=int,
                        default=-1,
                        help="Number of problems to retrieve. Default: -1."
                             "If -1, all problems are retrieved")
    parser.add_argument("-q", "--quiet", action="store_true",
                        default=False,
                        help="Suppress verbose messages. Default: False")
    # parse args
    args = parser.parse_args()
    print(args)
    if args.quiet:
        print("Running in Quiet Mode")

    if args.platform.lower() == "leetcode":
        leetcode_api = LeetCodeApi(quiet=args.quiet)
        algorithm_problems, _ = leetcode_api.get_algorithm_problems(force=False)
        algorithm_problems.sort(key=lambda x: int(x.identifier), reverse=True)
        number_of_problems = len(
            algorithm_problems) if args.count == -1 else args.count
        for problem in algorithm_problems[:number_of_problems]:
            print(problem)
        submit_directory = "..\\platforms\\leetcode\\practice"
        root = os.getcwd()
        print("Setting up solutions.cpp")
        template_solutions_file_path = \
            "\\templates" + "\\leetcode\\" + "solutions.cpp"
        template_desc_file_path = \
            "\\templates" + "\\leetcode\\" + "description.md"
        for problem in algorithm_problems[:number_of_problems]:
            if problem.is_premium:
                continue
            print("Setting up solutions.cpp for {0}. {1}"
                  .format(problem.identifier, problem.title))
            create_file(
                problem, submit_directory, "solutions.cpp",
                root + template_solutions_file_path, overwrite=args.overwrite)
            print("Setting up description.md for {0}. {1}"
                  .format(problem.identifier, problem.title))
            create_file(
                problem, submit_directory, "description.md",
                root + template_desc_file_path, overwrite=args.overwrite)
