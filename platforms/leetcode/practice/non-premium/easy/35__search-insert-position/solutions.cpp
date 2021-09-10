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
 *        Filename: 35__search-insert-position/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Search Insert Position' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <vector>

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
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty() || target < nums[0]) {
            return 0;
        }
        int nums_sz = static_cast<int>(nums.size());
        if (target > nums.back()) {
            return nums_sz;
        }
        for (int nums_i = 0; nums_i < nums_sz; ++nums_i) {
            if (target == nums[nums_i]) {
                return nums_i;
            }
            if (nums_i + 1 < nums_sz &&
                (target > nums[nums_i] && target < nums[nums_i + 1])) {
                return nums_i + 1;
            }
        }
        return nums_sz;
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
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty() || target < nums[0]) {
            return 0;
        }
        int nums_sz = static_cast<int>(nums.size());
        if (target > nums.back()) {
            return nums_sz;
        }
        int nums_left_i = 0, nums_right_i = nums_sz;
        while (nums_left_i <= nums_right_i) {
            int nums_mid_i = nums_left_i + ((nums_right_i - nums_left_i) >> 1);
            if (nums[nums_mid_i] == target) {
                return nums_mid_i;
            }
            if (nums_mid_i + 1 < nums_sz && target > nums[nums_mid_i] &&
                target < nums[nums_mid_i + 1]) {
                return nums_mid_i + 1;
            }
            if (nums[nums_mid_i] > target) {
                nums_right_i = nums_mid_i;
            } else {
                nums_left_i = nums_mid_i + 1;
            }
        }
        return nums_sz;
    }
};
}  // namespace solution_02
