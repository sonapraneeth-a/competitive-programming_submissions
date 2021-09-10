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
 *        Filename: 1979__find-greatest-common-divisor-of-array/solutions.cpp
 *      Created on: 28 August 2021
 *   Last modified: 28 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Find Greatest Common Divisor of Array' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 28-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <numeric>
#include <vector>

using std::__gcd;
using std::max_element;
using std::min_element;
using std::minmax_element;
using std::swap;
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
 * Time complexity: O(t*n), where t is number of test cases and n is size of nums
 * Space complexity: O(1)
 * Tags: Recursion, GCD
 * Categories: Array
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
     * Time complexity: O(log(min(a, b))), where a and b are input numbers and max value of a, b can be 2^31-1
     * Space complexity: O(log(min(a, b))), where a and b are input numbers and max value of a, b can be 2^31-1. Recursive stack space
     * Additional notes
     *  -
     */
    // clang-format on
    int gcdRecursive(int a, int b) {
        if (a > b) {
            swap(a, b);
        }
        if (a == 0) {
            return b;
        }
        return gcdRecursive(a, b % a);
    }

    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity: O(log(min(a, b))), where a and b are input numbers and max value of a, b can be 2^31-1
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    int gcdIterative(int a, int b) {
        if (a > b) {
            swap(a, b);
        }
        while (a > 0) {
            int remain = b % a;
            b          = a;
            a          = remain;
        }
        return b;
    }

 public:
    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity: O(n+n+31) ~ O(n), where n is size of nums
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    int findGCD(vector<int>& nums) {
        // C++17 <numeric>
        // return gcd(*min_element(begin(nums), end(nums)),
        //            *max_element(begin(nums), end(nums)));
        return __gcd(*min_element(begin(nums), end(nums)),
                     *max_element(begin(nums), end(nums)));
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
 * Time complexity: O(t*n), where t is number of test cases and n is size of nums
 * Space complexity: O(1)
 * Tags: GCD
 * Categories: Array
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
     * Time complexity: O(1.5*n+31) ~ O(n), where n is size of nums
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    int findGCD(vector<int>& nums) {
        const auto [minimum, maximum] = minmax_element(begin(nums), end(nums));
        // C++17 <numeric>
        // return gcd(*min_element(begin(nums), end(nums)),
        //            *max_element(begin(nums), end(nums)));
        return __gcd(*minimum, *maximum);
    }
};
}  // namespace solution_02
