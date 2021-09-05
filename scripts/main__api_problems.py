import argparse

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
    if args.platform.lower() == "leetcode":
        leetcode_api = LeetCodeApi(quiet=args.quiet)
        # Reference: https://stackoverflow.com/questions/5213033/sort-list-of-list-with-custom-compare-function-in-python
        algorithm_problems, _ = leetcode_api.get_algorithm_problems(force=False)
    algorithm_problems.sort(key=lambda x: int(x.identifier),
                            reverse=args.reverse)
    if args.count == -1:
        count = len(algorithm_problems)
    print_problems(algorithm_problems, count=args.count)
    if args.write_bib:
        bib_filename = 'logs/{0}/{0}.bib'.format(args.platform.lower())
        print('Writing to {0}'.format(bib_filename))
        write_bib_file(args.platform, algorithm_problems, bib_filename)
