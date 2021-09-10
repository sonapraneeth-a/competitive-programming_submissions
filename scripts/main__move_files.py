import os
import shutil

from slugify import slugify

from lib.apis.binarysearch import BinarySearchApi
from lib.apis.leetcode import LeetCodeApi

if __name__ == "__main__":
    platform = "binarysearch"
    if platform == "leetcode":
        leetcode_api = LeetCodeApi(quiet=True)
        algorithm_problems, _ = leetcode_api.get_algorithm_problems(force=False)
        algorithm_problems.sort(key=lambda x: int(x.identifier),
                                reverse=False)
        for type in ["premium", "non-premium"]:
            for difficulty in ["easy", "medium", "hard"]:
                directory = "../platforms/leetcode/practice/{0}/{1}" \
                    .format(type, difficulty)
                if not os.path.exists(directory):
                    os.makedirs(directory)
        for problem in algorithm_problems:
            source = "../platforms/leetcode/practice/{0}__{1}/" \
                .format(str(problem.identifier), problem.slug)
            destination = "../platforms/leetcode/practice/{0}/{1}" \
                .format("premium" if problem.is_premium else "non-premium",
                        problem.difficulty)
            if os.path.exists(source):
                shutil.move(source, destination)
    if platform == "binarysearch":
        binarysearch_api = BinarySearchApi(quiet=True)
        algorithm_problems, _ = binarysearch_api.get_algorithm_problems(force=False)
        algorithm_problems.sort(key=lambda x: int(x.identifier),
                                reverse=False)
        for difficulty in ["easy", "medium", "hard", "harder"]:
            directory = "../platforms/binarysearch/practice/{0}/" \
                .format(difficulty)
            if not os.path.exists(directory):
                os.makedirs(directory)
        for problem in algorithm_problems:
            source = "../platforms/binarysearch/practice/{0}__{1}/" \
                .format(str(problem.identifier), slugify(problem.slug))
            destination = "../platforms/binarysearch/practice/{0}" \
                .format(problem.difficulty)
            if os.path.exists(source):
                shutil.move(source, destination)
