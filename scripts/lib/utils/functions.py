import codecs
import os
from datetime import date

from lib.problem.leetcode import LeetCodeProblem


def create_bib_string(problem: LeetCodeProblem):
    url = problem.url
    bib = '@misc{'
    bib += 'leetcode:problems:algorithms:' + problem.slug + ',\n'
    bib += '\tauthor={{}},\n'
    bib += '\ttitle={{' + str(problem.identifier) + \
           '. ' + problem.title + '}},\n'
    bib += '\tnote={\\url{' + url + '}. Last accessed: ' + \
           date.today().strftime("%d %B, %Y") + '},\n'
    bib += '\thowpublished={{leetcode}},\n'
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
