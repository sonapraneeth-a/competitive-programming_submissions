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
 *        Filename: 2001__number-of-pairs-of-interchangeable-rectangles/solutions.cpp
 *      Created on: 12 September 2021
 *   Last modified: 12 September 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Number of Pairs of Interchangeable Rectangles' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 12-09-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <stdint.h>

#include <cstdint>
#include <unordered_map>
#include <vector>

using std::unordered_map;
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
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, int> ratio_map;
        for (const auto& rectangle : rectangles) {
            auto   numerator   = static_cast<double>(rectangle[0]);
            auto   denominator = static_cast<double>(rectangle[2]);
            double ratio       = numerator / denominator;
            if (ratio_map.find(ratio) == ratio_map.end()) {
                ratio_map.insert({ratio, 0});
            }
            ++ratio_map[ratio];
        }
        int64_t answer = 0;
        for (const auto& [key, val] : ratio_map) {
            auto value = static_cast<int64_t>(val);
            answer += ((value * (value - 1)) >> 1);
        }
        return static_cast<long long>(answer);
    }
};
}  // namespace solution_01
