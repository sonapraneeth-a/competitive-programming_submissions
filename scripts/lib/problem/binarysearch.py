from functools import total_ordering

from lib.problem.base import Problem


@total_ordering
class BinarySearchProblem(Problem):
    def __init__(self,
                 identifier: str,
                 title: str,
                 slug: str,
                 source_type: str,
                 contest_name: str = "",
                 chapter_name: str = "",
                 difficulty: str = "",
                 is_premium: bool = False,
                 status: str = "",
                 solution_slug: str = ""):
        """
        :param identifier: a string used as a unique identifier for the problem
        :param title: Title of the problem
        :param slug: Part of url removing the common parts
        :param source_type: Practice/Contest/Explore etc?
        :param contest_name: Name of the contest in which the problem appeared.
                             Empty if source_type is not Contest
        :param chapter_name: Sub-part of the contest. Example week name in
                             Explore
        :param difficulty: Level of difficulty of the problem
        :param is_premium: Is the problem a binarysearch premium?
        :param status:
        :param solution_slug: Link for binarysearch solution article (if exists)
        """
        url = "https://binarysearch.com/{0}problems/{1}" \
            .format(
                contest_name.lower().replace(" ", "-") + "/"
                if len(contest_name) != 0 else "",
                slug
            )
        super().__init__(
            platform="BinarySearch",
            identifier=identifier,
            title=title,
            url=url,
            slug=slug,
            source_type=source_type,
            contest_name=contest_name,
            chapter_name=chapter_name,
            difficulty=difficulty,
            is_premium=is_premium
        )
        self.solution_slug = solution_slug
        self.status = status

    def __del__(self):
        pass

    def __eq__(self, other):
        return int(self.identifier) == int(other.identifier)

    def __lt__(self, other):
        return int(self.identifier) < int(other.identifier)

    def __str__(self):
        answer = ""
        answer += "--- Problem ---\n"
        answer += "        ID: {0}\n".format(self.identifier)
        answer += "     Title: {0}\n".format(self.title)
        answer += "Difficulty: {0}\n".format(self.difficulty)
        return answer
