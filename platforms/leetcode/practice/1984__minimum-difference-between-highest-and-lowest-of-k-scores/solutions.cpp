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
 *        Filename: 1984__minimum-difference-between-highest-and-lowest-of-k-scores/solutions.cpp
 *      Created on: 30 August 2021
 *   Last modified: 30 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Minimum Difference Between Highest and Lowest of K Scores' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 30-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <cstdint>
#include <vector>

using std::min;
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
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) {
            return 0;
        }
        sort(begin(nums), end(nums));
        int difference = INT32_MAX;
        for (int idx = 0; idx + k - 1 < static_cast<int>(nums.size()); ++idx) {
            difference = min(difference, nums[idx + k - 1] - nums[idx]);
        }
        return difference;
    }
};
}  // namespace solution_01
