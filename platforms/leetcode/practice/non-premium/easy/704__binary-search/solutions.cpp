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
 *        Filename: 704__binary-search/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Binary Search' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <iterator>
#include <vector>

using std::binary_search;
using std::distance;
using std::find;
using std::lower_bound;
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
    int search(vector<int>& nums, int target) {
        // Non-STL
        // for (int nums_i = 0; nums_i < static_cast<int>(nums.size());
        // ++nums_i) {
        //     if (nums[nums_i] == target) {
        //         return nums_i;
        //     }
        // }
        // return -1;
        // STL
        auto itr = find(begin(nums), end(nums), target);
        if (itr != end(nums)) {
            return static_cast<int>(distance(begin(nums), itr));
        }
        return -1;
    }
};
}  // namespace solution_01

namespace solution_02 {
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
    int search(vector<int>& nums, int target) {
        // Non-STL
        // int nums_left_idx = 0, nums_right_idx =
        // static_cast<int>(nums.size());
        // while (nums_left_idx < nums_right_idx)
        // {
        //     int nums_mid_idx =
        //         nums_left_idx + ((nums_right_idx - nums_left_idx) >> 1);
        //     if (nums[nums_mid_idx] == target) {
        //         return nums_mid_idx;
        //     }
        //     if (nums[nums_mid_idx] < target) {
        //         nums_left_idx = nums_mid_idx + 1;
        //     } else {
        //         nums_right_idx = nums_mid_idx - 1;
        //     }
        // }
        // return -1;
        // STL
        auto itr = lower_bound(begin(nums), end(nums), target);
        if (itr != end(nums)) {
            return static_cast<int>(distance(begin(nums), itr));
        }
        return -1;
    }
};
}  // namespace solution_02
