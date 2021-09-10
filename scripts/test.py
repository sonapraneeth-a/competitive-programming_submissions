import base64
import json
import os

import requests
from markdownify import markdownify as md
from slugify import slugify



def fix_padding(input_byte_str: bytes) -> bytes:
    return input_byte_str + (b'=' * (len(input_byte_str) % 4))


if __name__ == "__main__":
    api_string = "https://codejam.googleapis.com/poll?p=e30"
    api_base64_response = requests.get(api_string).content
    # Reference: https://www.base64decode.org/
    api_response_json = \
        base64.urlsafe_b64decode(fix_padding(api_base64_response))
    api_response = json.loads(str(api_response_json, "Latin"))
    for response in api_response['adventures']:
        if response['competition__str'] == "KICK_START":
            print(response['competition__str'], " ", response["title"])
            year = slugify(response['title'].split(' ')[-1].strip())
            for challenge in response['challenges']:
                print(challenge['id'], " ", challenge['title'])
                contest_api_string = \
                    "https://codejam.googleapis.com/dashboard/{0}/poll?p=e30"
                contest_api_base64_response = \
                    requests.get(contest_api_string.format(challenge['id']))\
                    .content
                contest_api_response_json = \
                    base64.urlsafe_b64decode(
                        fix_padding(contest_api_base64_response))
                contest_api_response = \
                    json.loads(str(contest_api_response_json, "Latin"))
                tasks = contest_api_response['challenge']['tasks']
                for task in tasks:
                    # print(task['statement'])
                    round_name = slugify(",".join(challenge['title'].split(' ')[:2]))
                    directory = "logs\\google\\kickstart\\questions\\{0}\\{1}".format(year, round_name)
                    if not os.path.exists(directory):
                        os.makedirs(directory)
                    filename = directory + "\\{0}.html".format(slugify(task['title'].replace(" ", "_").lower()))
                    file = open(filename, "w")
                    file.write(task['statement'])
                    file.close()
                    # content = md(task['statement'], heading_style="ATX")
                    # file = open(directory + "\\{0}.md".format(
                    #     task['title'].replace(" ", "_").lower()), "w", encoding="utf-8")
                    # file.write(content)
                    # file.close()
                    # exit()

