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
 *        Filename: 973__k-closest-points-to-origin/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'K Closest Points to Origin' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <stdint.h>

#include <algorithm>
#include <cstdint>
#include <utility>
#include <vector>

using std::nth_element;
using std::pair;
using std::sort;
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
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<std::uint64_t, int>> distances;
        int points_sz = static_cast<int>(points_sz);
        for (int points_i = 0; points_i < points_sz; ++points_i) {
            auto     x        = static_cast<uint64_t>(points[points_i][0]);
            auto     y        = static_cast<uint64_t>(points[points_i][1]);
            uint64_t distance = (x * x) + (y * y);
            distances.emplace_back(distance, points_i);
        }
        sort(begin(distances), end(distances));
        vector<vector<int>> answer;
        for (int distances_i = 0; distances_i < k; ++distances_i) {
        }
        return answer;
    }
};
}  // namespace solution_01
