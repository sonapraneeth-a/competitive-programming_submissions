from functools import total_ordering


@total_ordering
class Problem(object):
    def __init__(self,
                 platform: str,
                 identifier: str,
                 title: str,
                 url: str,
                 slug: str,
                 source_type: str,
                 contest_name: str = "",
                 chapter_name: str = "",
                 difficulty: str = "",
                 is_premium: bool = False):
        """

        :param platform: Platform in which problem appeared
        :param identifier: a string used as a unique identifier for the problem
        :param title: Title of the problem
        :param url: URL location of the problem on the web
        :param slug: Slug
        :param source_type: Practice/Contest/Explore etc?
        :param contest_name: Name of the contest in which the problem appeared.
                             Empty if source_type is not Contest
        :param chapter_name: Sub-part of the contest. Example week name in
                             Explore
        :param difficulty: Level of difficulty of the problem
        """
        self.platform = platform
        self.source_type = source_type.lower()
        self.identifier = identifier
        self.title = title
        self.url = url
        self.slug = slug
        self.is_premium = is_premium
        self.contest_name = contest_name.lower().replace(" ", "_")
        self.explore_name = self.contest_name
        self.chapter_name = chapter_name.lower().replace(" ", "_")
        self.difficulty = difficulty.lower().capitalize()

    def __eq__(self, other):
        return int(self.identifier) == int(other.identifier)

    def __lt__(self, other):
        return int(self.identifier) < int(other.identifier)

    def __str__(self):
        answer = ""
        answer += "--- Problem ---\n"
        answer += "      ID: {0}\n".format(self.identifier)
        answer += "   Title: {0}\n".format(self.title)
        answer += "     URL: {0}\n".format(self.url)
        return answer

