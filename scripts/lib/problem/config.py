from lib.problem.base import Problem


class ConfigProblem(Problem):
    def __init__(self,
                 platform: str,
                 identifier: str,
                 title: str,
                 slug: str,
                 source_type: str,
                 contest_name: str = "",
                 chapter_name: str = "",
                 difficulty: str = "",
                 num_methods: int = 1,
                 default_code_definition=None,
                 test_cases=None):
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
        :param num_methods:
        :param default_code_definition:
        :param test_cases:
        """
        if test_cases is None:
            test_cases = [""]
        if default_code_definition is None:
            default_code_definition = ["void run()"]
        url = "https://leetcode.com/{0}problems/{1}" \
            .format(
                contest_name.lower().replace(" ", "-") + "/"
                if len(contest_name) != 0 else "",
                slug
            )
        super().__init__(
            platform=platform,
            identifier=identifier,
            title=title,
            url=url,
            source_type=source_type,
            contest_name=contest_name,
            chapter_name=chapter_name,
            difficulty=difficulty
        )
        self.slug = slug

    def __del__(self):
        pass

    def __str__(self):
        answer = ""
        answer += "--- Problem ---\n"
        answer += "      ID: {0}\n".format(self.identifier)
        answer += "   Title: {0}\n".format(self.title)
        answer += "Solution: {0}\n".format(self.solution_slug)
        return answer
