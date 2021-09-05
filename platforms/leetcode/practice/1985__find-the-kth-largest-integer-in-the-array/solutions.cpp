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
 *        Filename: 1985__find-the-kth-largest-integer-in-the-array/solutions.cpp
 *      Created on: 30 August 2021
 *   Last modified: 30 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Find the Kth Largest Integer in the Array' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 30-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <queue>
#include <string>
#include <vector>

using std::nth_element;
using std::priority_queue;
using std::sort;
using std::string;
using std::vector;

namespace solution_01 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail//
 * Status: Accepted. 219 / 219 test cases passed.
 * Runtime:  ms, faster than % of C++ online submissions
 * Memory usage: MB, less than % of C++ online submissions
 * Time complexity: O(t*n*s*log(n)), where t is number of tests, n is size of nums and s is the maximum size of string in nums
 * Space complexity: O(s*k), where s is the maximum size of string in nums and k is input
 * Tags: Heap
 * Categories: Array, String
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
     * Time complexity: O(n*s*log(n)), where n is size of nums and s is the maximum size of string in nums
     * Space complexity: O(s*k), where s is the maximum size of string in nums and k is input
     * Additional notes
     *  -
     */
    // clang-format on
    string kthLargestNumber(vector<string>& nums, int k) { return nums[k - 1]; }
};
}  // namespace solution_01

namespace solution_02 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/548847042/
 * Status: Accepted. 219 / 219 test cases passed.
 * Runtime: 321 ms, faster than 59.66% of C++ online submissions
 * Memory usage: 55.3 MB, less than 74.91% of C++ online submissions
 * Time complexity: O(t*n*s*log(n)), where t is number of tests, n is size of nums and s is the maximum size of string in nums
 * Space complexity: O(1)
 * Tags: Sort
 * Categories: Array, String
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
     * Time complexity: O(n*s*log(n)), where n is size of nums and s is the maximum size of string in nums
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(begin(nums), end(nums),
             [](const string& left, const string& right) {
                 int left_sz  = static_cast<int>(left.size());
                 int right_sz = static_cast<int>(right.size());
                 if (left_sz == right_sz) {
                     for (int idx = 0; idx < left_sz; ++idx) {
                         if (left[idx] - '0' > right[idx] - '0') {
                             return true;
                         }
                         if (left[idx] - '0' < right[idx] - '0') {
                             return false;
                         }
                     }
                 }
                 return left_sz > right_sz;
             });
        return nums[k - 1];
    }
};
}  // namespace solution_02

namespace solution_03 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/548848059/
 * Status: Accepted. 219 / 219 test cases passed.
 * Runtime: 217 ms, faster than 86.71% of C++ online submissions
 * Memory usage: 55.3 MB, less than 54.88% of C++ online submissions
 * Time complexity: O(t*n*s), where t is number of tests, n is size of nums and s is the maximum size of string in nums
 * Space complexity: O(1)
 * Tags: QuickSelect
 * Categories: Array, String
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
     * Time complexity: O(n*s), where t is number of tests, n is size of nums and s is the maximum size of string in nums
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    string kthLargestNumber(vector<string>& nums, int k) {
        nth_element(begin(nums), begin(nums) + k - 1, end(nums),
                    [](const string& left, const string& right) {
                        int left_sz  = static_cast<int>(left.size());
                        int right_sz = static_cast<int>(right.size());
                        if (left_sz == right_sz) {
                            for (int idx = 0; idx < left_sz; ++idx) {
                                if (left[idx] - '0' > right[idx] - '0') {
                                    return true;
                                }
                                if (left[idx] - '0' < right[idx] - '0') {
                                    return false;
                                }
                            }
                        }
                        return left_sz > right_sz;
                    });
        return nums[k - 1];
    }
};
}  // namespace solution_03
