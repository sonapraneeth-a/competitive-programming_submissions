import argparse

from lib.apis.binarysearch import BinarySearchApi
from lib.apis.leetcode import LeetCodeApi
from lib.utils.functions import print_problems, write_bib_file

levels = ['Easy', 'Medium', 'Hard']
colors = ['rgb(67, 160, 71)', 'rgb(239, 108, 0)', 'rgb(233, 30, 99)']

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    # command line flags
    parser.add_argument("-p", "--platform", default="LeetCode",
                        required=False,
                        help="Which platform the script should run? "
                             "Note: Input is case-sensitive "
                             "Default: LeetCode")
    parser.add_argument("-w", "--write_bib", action="store_true",
                        default=True,
                        help="Overwrite bib file. Default: False")
    parser.add_argument("-d", "--write_question_description",
                        action="store_true", default=True,
                        help="Dump question info?. Default: False")
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
    print(args)
    if args.quiet:
        print("Running in Quiet Mode")

    algorithm_problems = []
    platform_api = None
    if args.platform.lower() == "leetcode":
        platform_api = LeetCodeApi(quiet=args.quiet)
        # Reference: https://stackoverflow.com/questions/5213033/sort-list-of-list-with-custom-compare-function-in-python
    elif args.platform.lower() == "binarysearch":
        platform_api = BinarySearchApi(quiet=args.quiet)
    algorithm_problems, _ = platform_api.get_algorithm_problems(force=False)
    if args.write_question_description:
        for problem in algorithm_problems:
            print("Retrieving question for {0}. {1}".format(
                problem.identifier, problem.title))
            question = platform_api.get_question_info(problem=problem)
    else:
        print("Script not configured for {0}".format(args.platform))
        exit(1)
    algorithm_problems.sort(key=lambda x: int(x.identifier),
                            reverse=args.reverse)
    if args.count == -1:
        count = len(algorithm_problems)
    print_problems(algorithm_problems, count=8)
    if args.write_bib:
        bib_filename = 'logs/{0}/{0}.bib'.format(args.platform.lower())
        print('Writing to {0}'.format(bib_filename))
        write_bib_file(args.platform, algorithm_problems, bib_filename)
