import math
import os
import pathlib
import shutil
from datetime import date
from typing import List

from lib.apis.leetcode import LeetCodeApi
from lib.problem.leetcode import LeetCodeProblem
from lib.solution.base import Solution
from markdownify import markdownify as md


def update_file_line(line: str, problem: LeetCodeProblem) -> str:
    leetcode = LeetCodeApi(quiet=True)
    today = date.today()
    expanded_date = today.strftime("%d %B %Y")
    short_date = today.strftime("%d-%m-%Y")
    author_alias = "sonapraneeth_a"
    problem_directory = str(problem.identifier) + "__" + problem.slug.lower()
    problem_id = str(problem.identifier)
    problem_slug = problem.slug.lower()
    problem_title = problem.title
    problem_difficulty = problem.difficulty
    problem_difficulty_color = ""
    for idx in range(len(leetcode.levels)):
        if problem_difficulty == leetcode.levels[idx]:
            problem_difficulty_color = leetcode.colors[idx]
            break
    update_line = line
    if "EXPANDED_DATE" in update_line:
        update_line = update_line.replace("EXPANDED_DATE", expanded_date)
    if "AUTHOR_ALIAS" in update_line:
        update_line = update_line.replace("AUTHOR_ALIAS", author_alias)
    if "SHORT_DATE" in update_line:
        update_line = update_line.replace("SHORT_DATE", short_date)
    if "PROBLEM_DIRECTORY" in update_line:
        update_line = update_line.replace(
            "PROBLEM_DIRECTORY", problem_directory)
    if "PROBLEM_ID" in update_line:
        update_line = update_line.replace("PROBLEM_ID", problem_id)
    if "PROBLEM_SLUG" in update_line:
        update_line = update_line.replace("PROBLEM_SLUG", problem_slug)
    if "PROBLEM_TITLE" in update_line:
        update_line = update_line.replace("PROBLEM_TITLE", problem_title)
    if "PROBLEM_DIFFICULTY_COLOR" in update_line:
        update_line = update_line.replace(
            "PROBLEM_DIFFICULTY_COLOR", problem_difficulty_color)
    if "PROBLEM_DIFFICULTY" in update_line:
        update_line = update_line.replace("PROBLEM_DIFFICULTY",
                                          problem_difficulty)
    if "PROBLEM_PREMIUM" in update_line:
        update_line = update_line.replace(
            "PROBLEM_PREMIUM", "Yes" if problem.is_premium else "No")
    if "PROBLEM_CONTENT" in update_line:
        if not problem.is_premium:
            question = leetcode.get_question_info(question_slug=problem.slug)
            content = md(question['question']['content'], heading_style="ATX")
            update_line = content
    if "PROBLEM_TAGS" in update_line:
        question = leetcode.get_question_info(question_slug=problem.slug)
        content = question['question']['topicTags']
        tags = ", ".join([info['name'] for info in content])
        update_line = update_line.replace("PROBLEM_TAGS", tags)
    if "PROBLEM_SIMILAR_QUESTIONS" in update_line:
        pass
    if "PROBLEM_CODE_SNIPPET" in update_line:
        question = leetcode.get_question_info(question_slug=problem.slug)
        content = question['question']['codeSnippets']
        for info in content:
            if info['langSlug'] == "cpp":
                update_line = info['code']
                break
    return update_line


def create_file(
    problem: LeetCodeProblem,
    output_directory: str,
    file_type: str,
    template_file_path: str,
    overwrite: bool = False) -> None:
    is_attempted, problem_directory, output_file_path = \
        check_file(problem, output_directory, file_type, template_file_path)
    if not overwrite and is_attempted:
        print("File already setup for {0} for {1}. {2} at {3}".format(
            file_type, problem.identifier, problem.title, output_file_path))
    else:
        print("Setting up {0} for {1}. {2} at {3}"
              .format(file_type, problem.identifier, problem.title,
                      output_file_path))
        if not os.path.exists(output_file_path):
            directory = os.path.dirname(output_file_path)
            if not os.path.exists(directory):
                os.makedirs(directory)
            pathlib.Path(output_file_path).touch()
        shutil.copy(template_file_path, output_file_path)
        file_handle = open(output_file_path, "r", encoding="utf-8")
        lines = file_handle.readlines()
        file_handle.close()
        file_handle = open(output_file_path, "w", encoding="utf-8")
        for line in lines:
            line = update_file_line(line, problem)
            file_handle.write(line)
        file_handle.close()


def check_file(
    problem: LeetCodeProblem,
    output_directory: str,
    file_type: str,
    template_file_path: str) -> (bool, str, str):
    problem_directory = str(problem.identifier) + "__" + problem.slug.lower()
    output_file_path = \
        output_directory + "/" + problem_directory + "/" + file_type
    if not os.path.exists(template_file_path):
        print("Template filepath: {0} doesn't exist".format(
            template_file_path))
        exit(-1)
    template_file_size = math.ceil(1.5 * os.path.getsize(template_file_path))
    # print("Template filepath: {0}, size: {1}"
    #       .format(template_file_path, template_file_size))
    # print("Output file path: {0}, size: {1}".format(output_file_path,
    #     os.path.getsize(output_file_path)))
    is_attempted = False
    if os.path.exists(output_file_path) and \
        os.path.getsize(output_file_path) >= template_file_size:
        # print("File size: {0} {1}".format(
        #     problem_directory, os.path.getsize(output_file_path)))
        is_attempted = True
    return is_attempted, problem_directory, output_file_path


def read_comment_block(lines: List[str], idx: int):
    number_of_lines = len(lines)
    answer = ['']
    start, end = False, False
    while idx < number_of_lines:
        if "clang-format off" in lines[idx]:
            idx += 1
            continue
        if "/**" in lines[idx]:
            start = True
        if "*/" in lines[idx]:
            end = True
        if start:
            answer.append(lines[idx].rstrip())
        idx += 1
        if end:
            break
    del answer[0]
    return answer, idx


def read_copyright_notice(lines: List[str], idx: int):
    return read_comment_block(lines, idx)


def read_file_description(lines: List[str], idx: int):
    return read_comment_block(lines, idx)


def read_changelog(lines: List[str], idx: int):
    return read_comment_block(lines, idx)


def read_include_and_usings(lines: List[str], idx: int):
    number_of_lines = len(lines)
    answer = ['']
    while idx < number_of_lines:
        if "clang-format off" in lines[idx]:
            idx += 1
            continue
        if "clang-format on" in lines[idx]:
            idx += 1
            continue
        if "namespace" in lines[idx]:
            break
        answer.append(lines[idx].rstrip())
        idx += 1
    del answer[0]
    return answer, idx


def read_solution(lines: List[str], idx: int):
    number_of_lines = len(lines)
    answer = ['']
    start, end = False, False
    while idx < number_of_lines:
        if "clang-format off" in lines[idx]:
            idx += 1
            continue
        if "clang-format on" in lines[idx]:
            idx += 1
            continue
        if "namespace" in lines[idx]:
            start = True
        if "// namespace" in lines[idx]:
            end = True
        if start:
            answer.append(lines[idx].rstrip())
        idx += 1
        if end:
            break
    del answer[0]
    return answer, idx


def read_solutions(lines: List[str], idx: int) -> List[List[str]]:
    number_of_lines = len(lines)
    infos = []
    while idx < number_of_lines:
        info, idx = read_solution(lines, idx)
        infos.append(info)
    return infos


def read_solutions_file(problem: LeetCodeProblem) -> Solution:
    problem_directory = str(problem.identifier) + "__" + problem.slug.lower()
    output_directory = "..\\platforms\\leetcode\\practice"
    file = \
        output_directory + "/" + problem_directory + "/solutions.cpp"
    if not os.path.exists(file):
        print("Filename: {0} doesn't exist".format(file))
        return None
    fp = open(file, "r", encoding="UTF-8")
    lines = fp.readlines()
    fp.close()
    idx = 0
    solution = Solution(problem=problem)
    copyright_notice, idx = read_copyright_notice(lines, idx)
    file_description, idx = read_file_description(lines, idx)
    changelog, idx = read_changelog(lines, idx)
    include_and_usings, idx = read_include_and_usings(lines, idx)
    solutions = read_solutions(lines, idx)
    # print(file_description)
    submission_link = ""
    status = ""
    status_testcases = ""
    runtime = ""
    memory_usage = ""
    time_complexity = ""
    space_complexity = ""
    tags = []
    categories = []
    notes = []
    solution_no = 1
    for sol in solutions:
        # print("Solution no: {0}".format(solution_no))
        number_of_solution_lines = len(sol)
        line_idx = 0
        while line_idx < number_of_solution_lines:
            line = sol[line_idx]
            if "Submission link" in line:
                submission_link = line.replace("*", "")
                submission_link = submission_link.split("link:")[-1].strip()
            if "Status" in line:
                status = line.replace("*", "")
                status = status.split("Status:")[-1].strip()
                status_arr = status.split(".")
                status = status_arr[0]
                status_testcases = status_arr[1].replace(
                    "test cases passed", "").strip()
            if "Runtime" in line:
                runtime = line.replace("*", "")
                runtime = runtime.split(
                    "Runtime:")[-1].strip().replace("of C++ online submissions",
                                                    "")
            if "Memory usage" in line:
                memory_usage = line.replace("*", "")
                memory_usage = memory_usage.split(
                    "Memory usage:")[-1].strip().replace(
                    "of C++ online submissions", "")
            if "Time complexity" in line:
                time_complexity = line.replace("*", "")
                time_complexity = time_complexity.split(
                    "Time complexity:")[-1].strip()
            if "Space complexity" in line:
                space_complexity = line.replace("*", "")
                space_complexity = space_complexity.split(
                    "Space complexity:")[-1].strip()
            if "Tags" in line:
                tags = line.replace("*", "")
                tags = tags.split("Tags:")[-1].strip().split(",")
            if "Categories" in line:
                categories = line.replace("*", "")
                categories = categories.split(
                    "Categories:")[-1].strip().split(",")
            if "Additional notes" in line:
                line_idx += 1
                while "*/" in sol[line_idx]:
                    line = sol[line_idx]
                    note = line.replace("*  -", "")
                    notes.append(note)
                    line_idx += 1
                break
            line_idx += 1
        # print("\t      Submission: '{0}'".format(submission_link))
        # print("\t          Status: '{0}'".format(status))
        # print("\t    Status tests: '{0}'".format(status_testcases))
        # print("\t         Runtime: '{0}'".format(runtime))
        # print("\t    Memory usage: '{0}'".format(memory_usage))
        # print("\t Time complexity: '{0}'".format(time_complexity))
        # print("\tSpace complexity: '{0}'".format(space_complexity))
        # print("\t            Tags: '{0}'".format(",".join(tags)))
        # print("\t      Categories: '{0}'".format(",".join(categories)))
        # print("\t           Notes: '{0}'".format(";".join(notes)))
        solution_no += 1
    return solution
