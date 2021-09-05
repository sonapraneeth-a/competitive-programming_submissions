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
                 difficulty: str = ""):
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
        self.contest_name = contest_name.lower().replace(" ", "_")
        self.explore_name = self.contest_name
        self.chapter_name = chapter_name.lower().replace(" ", "_")
        self.difficulty = difficulty.lower().capitalize()

