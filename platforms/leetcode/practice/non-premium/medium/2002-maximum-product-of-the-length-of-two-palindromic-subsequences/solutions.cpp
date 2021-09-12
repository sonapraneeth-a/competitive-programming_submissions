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
 *        Filename: 2002__maximum-product-of-the-length-of-two-palindromic-subsequences/solutions.cpp
 *      Created on: 12 September 2021
 *   Last modified: 12 September 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Maximum Product of the Length of Two Palindromic Subsequences' problem
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
#include <utility>
#include <vector>

using std::max;
using std::pair;
using std::string;
using std::vector;

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
 private:
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
    int is_palindrome(const string& s, int config) {
        int sz = 0;
        for (int left = 0, right = 13;
             left < 14 && right >= 0 && left <= right;) {
            while ((config & (1 << left)) > 0) {
                ++left;
            }
            while ((config & (1 << right)) > 0) {
                --right;
            }
            if (left < right) {
                if (s[left] != s[right]) {
                    return 0;
                }
                sz += 2;
            }
            if (left == right) {
                sz += 1;
            }
            ++left;
            --right;
        }
        return sz;
    }

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
    int maxProduct(string s) {
        int                    sz       = static_cast<int>(s.size());
        int                    possible = 1 << sz, number_of_configs = 0;
        vector<pair<int, int>> configs;
        for (int idx = 1; idx < possible; ++idx) {
            int psz = is_palindrome(s, idx);
            if (psz > 0) {
                configs.emplace_back(idx, psz);
            }
        }
        int answer = 1;
        for (int idx1 = 0; idx1 < number_of_configs; ++idx1) {
            for (int idx2 = idx1 + 1; idx2 < number_of_configs; ++idx2) {
                int config1 = configs[idx1].first,
                    config2 = configs[idx2].first;
                int sz1 = configs[idx1].second, sz2 = configs[idx2].second;
                if ((config1 & config2) == 0) {
                    answer = max(answer, sz1 * sz2);
                }
            }
        }
        return answer;
    }
};
}  // namespace solution_01
