import codecs
import os
from datetime import date
from typing import List

from lib.problem.base import Problem


def create_bib_string(platform: str, problem: Problem):
    url = problem.url
    bib = '@misc{'
    bib += '{0}:problems:algorithms:{1},\n'\
        .format(platform.lower(), problem.slug)
    bib += '\tauthor={{}},\n'
    bib += '\ttitle={{' + str(problem.identifier) + \
           '. ' + problem.title + '}},\n'
    bib += '\tnote={\\url{' + url + '}. Last accessed: ' + \
           date.today().strftime("%d %B, %Y") + '},\n'
    bib += '\thowpublished={{{0}}},\n'.format(platform.lower())
    bib += '\turl={' + url + '/},\n'
    bib += '}\n\n'
    return bib


def has_bom(bs):
    # Reference: https://gist.github.com/nevill/6a59ad277342bea2f8108cf55a35ba3e
    utf8_bom = b'\xef\xbb\xbf'
    utf16_bom = b'\xff\xfe'
    if bs.startswith(utf8_bom) or bs.startswith(utf16_bom):
        return True
    return False


def remove_bom_inplace(path):
    # Reference: https://www.stefangordon.com/remove-bom-mark-from-text-files-in-python/
    """Removes BOM mark, if it exists, from a file and rewrites it in-place"""
    buffer_size = 4096
    bom_length = len(codecs.BOM_UTF8)

    with open(path, "r+b") as fp:
        chunk = fp.read(buffer_size)
        if chunk.startswith(codecs.BOM_UTF8):
            i = 0
            chunk = chunk[bom_length:]
            while chunk:
                fp.seek(i)
                fp.write(chunk)
                i += len(chunk)
                fp.seek(bom_length, os.SEEK_CUR)
                chunk = fp.read(buffer_size)
            fp.seek(-bom_length, os.SEEK_CUR)
            fp.truncate()


def print_problems(problems: List[Problem], count: int = 8):
    for problem in problems[:count]:
        print(problem)


def write_bib_file(platform: str,
                   problems: List[Problem],
                   filename: str):
    with open(filename, 'w') as outfile:
        for problem in problems:
            bib_string = create_bib_string(platform, problem)
            outfile.write(bib_string)
