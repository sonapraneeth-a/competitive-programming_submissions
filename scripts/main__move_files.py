import os
import shutil

from lib.apis.leetcode import LeetCodeApi

if __name__ == "__main__":
    platform_api = LeetCodeApi(quiet=True)
    algorithm_problems, _ = platform_api.get_algorithm_problems(force=False)
    algorithm_problems.sort(key=lambda x: int(x.identifier),
                            reverse=False)
    new_directories = []
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
