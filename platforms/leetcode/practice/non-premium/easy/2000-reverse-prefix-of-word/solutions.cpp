// clang-format off
/**
 * COPYRIGHT NOTICE
 *
 * Copyright (c) 2021. Sona Praneeth Akula <sonapraneeth.akula@gmail.com>
 *
 * This file is part of leetcode practice(submit) in competitive programming.
 *
 * This file cannot be copied and/or distributed without the express
 * permission of the copyright owner.
 *
 */

/**
 * FILE DESCRIPTION
 *
 *        Filename: 2000__reverse-prefix-of-word/solutions.cpp
 *      Created on: 12 September 2021
 *   Last modified: 12 September 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Reverse Prefix of Word' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 12-09-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <string>

using std::find;
using std::reverse;
using std::string;

namespace solution_01 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail//
 * Status: .  /  test cases passed.
 * Runtime:  ms, faster than % of C++ online submissions
 * Memory usage:  MB, less than % of C++ online submissions
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution {
 public:
    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity:
     * Space complexity:
     * Additional notes
     *  -
     */
    // clang-format on
    string reversePrefix(string word, char ch) {
        auto itr = find(begin(word), end(word), ch);
        if (itr != end(word)) {
            reverse(begin(word), itr + 1);
        }
        return word;
    }
};
}  // namespace solution_01
