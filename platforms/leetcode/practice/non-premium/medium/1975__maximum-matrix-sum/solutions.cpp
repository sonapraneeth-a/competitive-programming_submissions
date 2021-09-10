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
 *        Filename: 1975__maximum-matrix-sum/solutions.cpp
 *      Created on: 28 August 2021
 *   Last modified: 28 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Maximum Matrix Sum' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 28-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <vector>

using std::abs;
using std::min;
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
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int64_t sum             = 0;
        int     rows            = static_cast<int>(matrix.size());
        int64_t negative_count  = 0,
                minimum_element = static_cast<int64_t>(INT32_MAX);
        bool zero_present       = false;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < rows; ++j) {
                sum += abs(matrix[i][j]);
                if (matrix[i][j] == 0) {
                    zero_present = true;
                } else {
                    if (matrix[i][j] < 0) {
                        ++negative_count;
                    }
                    minimum_element =
                        min(minimum_element,
                            static_cast<int64_t>(abs(matrix[i][j])));
                }
            }
        }
        sum -=
            negative_count % 2 == 0 || zero_present ? 0 : 2 * minimum_element;
        return static_cast<long long>(sum);
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
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int64_t sum = 0, number_of_negatives = 0,
                minimum_abs_val = static_cast<int64_t>(INT_MAX);
        for (const auto& row : matrix) {
            for (const auto& val : row) {
                sum += abs(val);
                number_of_negatives += (val < 0 ? 1 : 0);
                minimum_abs_val =
                    min(minimum_abs_val, static_cast<int64_t>(abs(val)));
            }
        }
        return sum - (number_of_negatives % 2 == 0 ? 0 : 2 * minimum_abs_val);
    }
};
}  // namespace solution_02
