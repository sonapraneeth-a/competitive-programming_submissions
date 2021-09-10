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
 *        Filename: 1980__find-unique-binary-string/solutions.cpp
 *      Created on: 28 August 2021
 *   Last modified: 28 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Find Unique Binary String' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 28-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <algorithm>
#include <bitset>
#include <string>
#include <unordered_set>
#include <vector>

using std::any_of;
using std::bitset;
using std::generate;
using std::string;
using std::unordered_set;
using std::vector;

namespace solution_01 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/548853016/
 * Status: Accepted. 181 / 181 test cases passed.
 * Runtime: 8 ms, faster than 27.50% of C++ online submissions
 * Memory usage: 10.5 MB, less than 35.63% of C++ online submissions
 * Time complexity: O(t*log(n)*2^n), where t is number of tests, n is size of nums and c is time taken to search set which is constant
 * Space complexity: O(n^2), where n is size of nums
 * Tags: Hashset
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
     * Time complexity: O((log(n) + c)*2^n) ~ O(log(n)*2^n), where n is size of nums and c is time taken to search set which is constant
     * Space complexity: O(n^2 + n^2) ~ O(n^2), where n is size of nums
     * Additional notes
     *  -
     */
    // clang-format on
    string findDifferentBinaryString(vector<string>& nums) {
        int                   nums_sz = static_cast<int>(nums.size());
        string                answer(nums_sz, '0');
        unordered_set<string> nums_set(begin(nums), end(nums));
        for (int idx = 0; idx <= (1 << nums_sz); ++idx) {
            string idx_string(nums_sz, '0');
            int    number   = idx;
            int    temp_idx = nums_sz - 1;
            while (number > 0) {
                idx_string[temp_idx] = static_cast<int>(number & 1) + '0';
                number >>= 1;
                --temp_idx;
            }
            if (nums_set.find(idx_string) == nums_set.end()) {
                return idx_string;
            }
        }
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
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> nums_set;
        for (auto& num : nums) {
            nums_set.insert(stoi(num, nullptr, 2));
        }
        int string_sz = static_cast<int>(nums.size());
        for (int number = 0;; ++number) {
            if (nums_set.find(number) == nums_set.end()) {
                return bitset<16>(number).to_string().substr(16 - string_sz);
            }
        }
        return "";
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
    string findDifferentBinaryString(vector<string>& nums) {
        int    nums_sz = static_cast<int>(nums.size());
        string answer(nums_sz, '0');
        for (int nums_i = 0; nums_i < nums_sz; ++nums_i) {
            answer[nums_i] = nums[nums_i][nums_i] == '0' ? '1' : '0';
        }
        return answer;
    }
};
}  // namespace solution_03

namespace solution_04 {
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
    string findDifferentBinaryString(vector<string>& nums) {
        int    nums_sz = static_cast<int>(nums.size());
        string answer(nums_sz, '0');
        while (any_of(begin(nums), end(nums),
                      [&answer](const string& num) { return num == answer; })) {
            generate(begin(answer), end(answer),
                     []() { return rand() % 2 == 1 ? '1' : '0'; });
        }
        return answer;
    }
};
}  // namespace solution_04
