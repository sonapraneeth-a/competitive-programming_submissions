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
 *        Filename: 977__squares-of-a-sorted-array/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Squares of a Sorted Array' problem
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

using std::distance;
using std::sort;
using std::transform;
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
    vector<int> sortedSquares(vector<int>& nums) {
        // Non-STL
        // vector<int> answer(nums);
        // for (int& num : answer) {
        //     num *= num;
        // }
        // STL
        vector<int> answer(static_cast<int>(nums.size()));
        transform(begin(nums), end(nums), begin(answer),
                  [](int num) { return num *= num; });
        sort(begin(answer), end(answer));
        return answer;
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
    vector<int> sortedSquares(vector<int>& nums) {
        sort(begin(nums), end(nums),
             [](int left, int right) { return abs(left) < abs(right); });
        // Non-STL
        // vector<int> answer(nums);
        // for (int& num : answer) {
        //     num *= num;
        // }
        // STL
        vector<int> answer(static_cast<int>(nums.size()));
        transform(begin(nums), end(nums), begin(answer),
                  [](int num) { return num *= num; });
        return answer;
    }
};
}  // namespace solution_02

namespace solution_03 {
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
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer;
        int         nums_sz   = static_cast<int>(nums.size());
        auto        it        = lower_bound(begin(nums), end(nums), 0);
        int         right_idx = static_cast<int>(distance(it, begin(nums)));
        int         left_idx  = right_idx - 1;
        int         count     = 0;
        while (count != nums_sz) {
            if (left_idx >= 0 && right_idx < nums_sz) {
                if (abs(nums[left_idx]) <= abs(nums[right_idx])) {
                    answer.emplace_back(nums[left_idx] * nums[left_idx]);
                    --left_idx;
                } else {
                    answer.emplace_back(nums[right_idx] * nums[right_idx]);
                    ++right_idx;
                }
            } else if (left_idx < 0 && right_idx < nums_sz) {
                answer.emplace_back(nums[right_idx] * nums[right_idx]);
                ++right_idx;
            } else if (left_idx >= 0 && right_idx >= nums_sz) {
                answer.emplace_back(nums[left_idx] * nums[left_idx]);
                --left_idx;
            }
            ++count;
        }
        return answer;
    }
};
}  // namespace solution_03
