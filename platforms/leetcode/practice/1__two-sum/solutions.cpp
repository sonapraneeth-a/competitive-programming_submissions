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
 *        Filename: 1__two-sum/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Two Sum' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 *                                              - Adding 4 solutions
 */
// clang-format on

#include <algorithm>
#include <unordered_map>
#include <utility>
#include <vector>

using std::pair;
using std::sort;
using std::unordered_map;
using std::vector;

namespace solution_01 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547297985/
 * Status: Accepted. 55 / 55 test cases passed.
 * Runtime: 268 ms, faster than 29.35% of C++ online submissions
 * Memory usage: 10.1 MB, less than 78.43% of C++ online submissions
 * Time complexity: O(n^2), where n is size of nums
 * Space complexity: O(1)
 * Tags: Brute force
 * Categories: Array
 * Additional notes:
 *  -
 */
// clang-format on
class Solution {
 public:
    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity: O(n^2), where n is size of nums
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_sz = static_cast<int>(nums.size());
        // 0. Base case
        if (nums_sz < 2) {
            return {};
        }
        // 1. For all pairs of numbers, find that pair which sums to `target`
        for (int nums_i = 0; nums_i < nums_sz; ++nums_i) {
            for (int nums_j = nums_i + 1; nums_j < nums_sz; ++nums_j) {
                if (nums[nums_i] + nums[nums_j] == target) {
                    return {nums_i, nums_j};
                }
            }
        }
        return {};
    }
};
}  // namespace solution_01

namespace solution_02 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547301405/
 * Status: Accepted. 55 / 55 test cases passed.
 * Runtime: 14 ms, faster than 51.10% of C++ online submissions
 * Memory usage: 10.5 MB, less than 63.63% of C++ online submissions
 * Time complexity: O(n*log(n) + n) ~ O(n*log(n)), where n is size of nums
 * Space complexity: O(n), where n is size of nums
 * Tags: Sort, Two pointers
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
     * Time complexity: O(n*log(n) + n) ~ O(n*log(n)), where n is size of nums
     * Space complexity: O(n), where n is size of nums
     * Additional notes
     *  -
     */
    // clang-format on
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_sz = static_cast<int>(nums.size());
        // 0. Base case
        if (nums_sz < 2) {
            return {};
        }
        // 1. Create a map of number and its corresponding index in `nums`
        vector<pair<int, int>> numbers(nums_sz, {-1, -1});
        for (int nums_i = 0; nums_i < nums_sz; ++nums_i) {
            numbers[nums_i] = {nums[nums_i], nums_i};
        }
        // 2. Sort the numbers in ascending order first based on value and then
        //    based on index
        sort(begin(numbers), end(numbers),
             [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
                 if (lhs.first == rhs.first) {
                     return lhs.second < rhs.second;
                 }
                 return lhs.first < rhs.first;
             });
        // 3. Use two pointers, `left_nums_i` (pointing towards the left end of
        //    sorted array) and `right_nums_i` (pointing towards the right end
        //    of sorted array)
        int left_nums_i  = 0;
        int right_nums_i = nums_sz - 1;
        // 4. Calculate the sum of `nums[left_nums_i]` and `nums[right_nums_i]`
        //    Let it be `sum`. Check if the `sum` equals `target`
        //    If yes, we've got the required indices
        //    If no,
        //      (1) If the `sum` > `target`, in order to reached the target
        //          we need to reduce `right_nums_i`, so that the new `sum` can
        //          be reduced
        //      (2) If the `sum` < `target`, in order to reached the target
        //          we need to increase `left_nums_i`, so that the new `sum` can
        //          be increased
        //    Continue this until `left_nums_i` < `right_nums_i`
        while (left_nums_i < right_nums_i) {
            if (numbers[left_nums_i].first + numbers[right_nums_i].first ==
                target) {
                return {numbers[left_nums_i].second,
                        numbers[right_nums_i].second};
            }
            if (numbers[left_nums_i].first + numbers[right_nums_i].first >
                target) {
                --right_nums_i;
            } else {
                ++left_nums_i;
            }
        }
        return {};
    }
};
}  // namespace solution_02

namespace solution_03 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547302807/
 * Status: Accepted. 55 / 55 test cases passed.
 * Runtime: 22 ms, faster than 38.27% of C++ online submissions
 * Memory usage: 14.2 MB, less than 5.75% of C++ online submissions
 * Time complexity: O(n+n) ~ O(n), where n is size of nums
 * Space complexity: O(n), where n is size of nums
 * Tags: Two pass
 * Categories: Array, Hashmap
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
     * Time complexity: O(n+n) ~ O(n), where n is size of nums
     * Space complexity: O(n), where n is size of nums
     * Additional notes
     *  -
     */
    // clang-format on
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_sz = static_cast<int>(nums.size());
        // 0. Base case
        if (nums_sz < 2) {
            return {};
        }
        // 1. Create a mapping from number to its occurrence in `nums`. Store it
        //    in `vector` as a single number could occur multiple times in
        //    `nums`
        unordered_map<int, vector<int>> num_to_nums_i_map {};
        for (int nums_i = 0; nums_i < nums_sz; ++nums_i) {
            num_to_nums_i_map[nums[nums_i]].emplace_back(nums_i + 1);
        }
        // 2. Loop through map
        //  (1) If `target` == (2 * `key`) and we have atleast two instances of
        //     `key` occurring in `nums`, we've got the required indices
        //  (2) Check if `key` and `target - key` are present in `nums`. If yes,
        //      we've got the required indices
        for (const auto& [key, val] : num_to_nums_i_map) {
            if (target == (key * 2)) {
                if (val.size() >= 2) {
                    return {val[0] - 1, val[1] - 1};
                }
            } else {
                auto itr = num_to_nums_i_map.find(target - key);
                if (itr != num_to_nums_i_map.end()) {
                    return {val[0] - 1, itr->second[0] - 1};
                }
            }
        }
        return {};
    }
};
}  // namespace solution_03

namespace solution_04 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547303853/
 * Status: Accepted. 55 / 55 test cases passed.
 * Runtime: 23 ms, faster than 38.06% of C++ online submissions
 * Memory usage: 10.8 MB, less than 53.29% of C++ online submissions
 * Time complexity: O(n), where n is size of nums
 * Space complexity: O(n), where n is size of nums
 * Tags: One pass
 * Categories: Array, Hashmap
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
     * Time complexity: O(n), where n is size of nums
     * Space complexity: O(n), where n is size of nums
     * Additional notes
     *  -
     */
    // clang-format on
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_sz = static_cast<int>(nums.size());
        // 0. Base case
        if (nums_sz < 2) {
            return {};
        }
        // 1. Create a mapping from number to its occurrence in `nums`.
        // 2. For each `value` in `nums`
        //    (1) Check if `target - value` exists in map. If yes, we've got
        //        required indices
        //    (2) Else, add `value` and its corresponding index to map
        unordered_map<int, int> num_to_nums_i_map;
        for (int nums_i = 0; nums_i < nums_sz; ++nums_i) {
            auto itr = num_to_nums_i_map.find(target - nums[nums_i]);
            if (itr == num_to_nums_i_map.end()) {
                num_to_nums_i_map.insert({nums[nums_i], nums_i});
            } else {
                return {itr->second, nums_i};
            }
        }
        return {};
    }
};
}  // namespace solution_04
