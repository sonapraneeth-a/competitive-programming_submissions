import argparse
from typing import List

from lib.apis.leetcode import LeetCodeApi
from lib.problem.leetcode import LeetCodeProblem
from lib.utils.functions import create_bib_string

levels = ['Easy', 'Medium', 'Hard']
colors = ['rgb(67, 160, 71)', 'rgb(239, 108, 0)', 'rgb(233, 30, 99)']


# Reference: https://stackoverflow.com/questions/5213033/sort-list-of-list-with-custom-compare-function-in-python
def compare(item1: LeetCodeProblem, item2: LeetCodeProblem):
    return int(item1.identifier) - int(item2.identifier)


def print_problems(problems: List[LeetCodeProblem], count: int = 8):
    for leetcode_problem in problems[:count]:
        print(leetcode_problem)


def write_bib_file(problems: List[LeetCodeProblem],
                   filename: str = 'leetcode.bib'):
    with open(filename, 'w') as outfile:
        for problem in problems:
            bib_string = create_bib_string(problem)
            outfile.write(bib_string)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    # command line flags
    parser.add_argument("-w", "--write_bib", action="store_true",
                        default=False,
                        help="Overwrite bib file. Default: False")
    parser.add_argument("-r", "--reverse", action="store_true",
                        default=False,
                        help="Retrieve top n problems. Default: False"
                             "Sorted in ascending order based on problem id")
    parser.add_argument("-c", "--count", type=int,
                        default=-1,
                        help="Number of problems to retrieve. Default: -1."
                             "If -1, all problems are retrieved")
    parser.add_argument("-q", "--quiet", action="store_true",
                        default=False,
                        help="Suppress verbose messages. Default: False")
    # parse args
    args = parser.parse_args()
    if args.quiet:
        print("Running in Quiet Mode")

    leetcode_api = LeetCodeApi(quiet=args.quiet)
    algorithm_problems, _ = leetcode_api.get_algorithm_problems(force=False)
    algorithm_problems.sort(key=lambda x: int(x.identifier),
                            reverse=args.reverse)
    if args.count == -1:
        count = len(algorithm_problems)
    print_problems(algorithm_problems, count=args.count)
    if args.write_bib:
        print('Writing to logs/leetcode/leetcode.bib')
        write_bib_file(algorithm_problems, 'logs/leetcode/leetcode.bib')
