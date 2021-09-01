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
 *        Filename: 2__add-two-numbers/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Add Two Numbers' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <queue>

using std::queue;

struct ListNode {
    int       val {0};
    ListNode* next {nullptr};
    explicit ListNode(int x) : val(x) { }
    explicit ListNode(int x, ListNode* next) : val(x), next(next) { }
};

namespace solution_01 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547629757/
 * Status: Accepted. 1568 / 1568 test cases passed.
 * Runtime: 28 ms, faster than 70.16% of C++ online submissions
 * Memory usage: 75.3 MB, less than 11.07% of C++ online submissions
 * Time complexity: O(t*(m+n+max(m,n))) ~ O(t*(m+n)), where t is number of tests, m is size of l1, n is size of l2
 * Space complexity: O(m+n), where m is size of l1 and n is size of l2
 * Tags: Queue, Two pass
 * Categories: Linked list
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
     * Time complexity: O(m+n+max(m,n)) ~ O(m+n), where m is size of l1 and n is size of l2
     * Space complexity: O(m+n), where m is size of l1 and n is size of l2
     * Additional notes
     *  -
     */
    // clang-format on
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> ql1, ql2;
        int        ql1_sz = 0, ql2_sz = 0;
        ListNode * temp_l1 = l1, *temp_l2 = l2;
        while (temp_l1 != nullptr) {
            ql1.emplace(temp_l1->val);
            temp_l1 = temp_l1->next;
            ++ql1_sz;
        }
        while (temp_l2 != nullptr) {
            ql2.emplace(temp_l2->val);
            temp_l2 = temp_l2->next;
            ++ql2_sz;
        }
        ListNode *answer = nullptr, *temp_answer = nullptr;
        int       sum = 0, carry = 0;
        while (!ql1.empty() && !ql2.empty()) {
            sum   = carry + ql1.front() + ql2.front();
            carry = sum / 10;
            sum %= 10;
            if (answer == nullptr) {
                answer      = new ListNode(sum);
                temp_answer = answer;
            } else {
                temp_answer->next = new ListNode(sum);
                temp_answer       = temp_answer->next;
            }
            ql1.pop(), ql2.pop();
        }
        queue<int> temp_q = ql1_sz > ql2_sz ? ql1 : ql2;
        while (!temp_q.empty()) {
            sum   = carry + temp_q.front();
            carry = sum / 10;
            sum %= 10;
            temp_answer->next = new ListNode(sum);
            temp_answer       = temp_answer->next;
            temp_q.pop();
        }
        if (carry != 0) {
            temp_answer->next = new ListNode(carry);
            temp_answer       = temp_answer->next;
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
 * Submission link: https://leetcode.com/submissions/detail/547633980/
 * Status: Accepted. 1568 / 1568 test cases passed.
 * Runtime: 51 ms, faster than 11.84% of C++ online submissions
 * Memory usage: 71.4 MB, less than 80.21% of C++ online submissions
 * Time complexity: O(t*max(m,n)), where t is number of tests, m is size of l1 and n is size of l2
 * Space complexity: O(1)
 * Tags: One pass
 * Categories: Linked list
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
     * Time complexity: O(max(m,n)), where m is size of l1 and n is size of l2
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp_l1 = l1, *temp_l2 = l2;
        ListNode *answer = nullptr, *temp_answer = nullptr;
        int       sum = 0, carry = 0;
        while (temp_l1 != nullptr && temp_l2 != nullptr) {
            sum   = carry + temp_l1->val + temp_l2->val;
            carry = sum / 10;
            sum %= 10;
            if (answer == nullptr) {
                answer      = new ListNode(sum);
                temp_answer = answer;
            } else {
                temp_answer->next = new ListNode(sum);
                temp_answer       = temp_answer->next;
            }
            temp_l1 = temp_l1->next, temp_l2 = temp_l2->next;
        }
        ListNode* temp_list = temp_l1 != nullptr ? temp_l1 : temp_l2;
        while (temp_list != nullptr) {
            sum   = carry + temp_list->val;
            carry = sum / 10;
            sum %= 10;
            temp_answer->next = new ListNode(sum);
            temp_answer       = temp_answer->next;
            temp_list         = temp_list->next;
        }
        if (carry != 0) {
            temp_answer->next = new ListNode(carry);
            temp_answer       = temp_answer->next;
        }
        return answer;
    }
};
}  // namespace solution_02

namespace solution_03 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547634633/
 * Status: Accepted. 1568 / 1568 test cases passed.
 * Runtime: 55 ms, faster than 9.76% of C++ online submissions
 * Memory usage: 71.4 MB, less than 80.21% of C++ online submissions
 * Time complexity: O(t*max(m,n)), where t is number of tests, m is size of l1 and n is size of l2
 * Space complexity: O(1)
 * Tags: Dummy head, One pass
 * Categories: Linked list
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
     * Time complexity: O(max(m,n)), where m is size of l1 and n is size of l2
     * Space complexity: O(1)
     * Additional notes
     *  -
     */
    // clang-format on
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy_head(0), *answer = &dummy_head;
        int      carry = 0;
        while ((l1 != nullptr) || (l2 != nullptr) || (carry != 0)) {
            int sum = (l1 != nullptr ? l1->val : 0) +
                      (l2 != nullptr ? l2->val : 0) + carry;
            carry        = sum / 10;
            answer->next = new ListNode(sum % 10);
            answer       = answer->next;
            l1           = l1 != nullptr ? l1->next : l1;
            l2           = l2 != nullptr ? l2->next : l2;
        }
        return dummy_head.next;
    }
};
}  // namespace solution_03

namespace solution_04 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail/547635360/
 * Status: Accepted. 1568 / 1568 test cases passed.
 * Runtime: 57 ms, faster than 8.4% of C++ online submissions
 * Memory usage: 71.6 MB, less than 11.07% of C++ online submissions
 * Time complexity: O(t*max(m,n)), where t is number of tests, m is size of l1 and n is size of l2
 * Space complexity: O(max(m,n)), where m is size of l1 and n is size of l2. recursion stack space
 * Tags:
 * Categories: Linked list, Recursion
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
     * Time complexity: O(max(m,n)), where m is size of l1 and n is size of l2
     * Space complexity: O(max(m,n)), where m is size of l1 and n is size of l2. recursion stack space
     * Additional notes
     *  -
     */
    // clang-format on
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry) {
        if (l1 == nullptr && l2 == nullptr && carry == 0) {
            return nullptr;
        }
        int sum = (l1 != nullptr ? l1->val : 0) +
                  (l2 != nullptr ? l2->val : 0) + carry;
        auto* answer_head = new ListNode(sum % 10);
        answer_head->next =
            addTwoNumbers(l1 != nullptr ? l1->next : l1,
                          l2 != nullptr ? l2->next : l2, sum / 10);
        return answer_head;
    }

 public:
    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity: O(max(m,n)), where m is size of l1 and n is size of l2
     * Space complexity: O(max(m,n)), where m is size of l1 and n is size of l2. recursion stack space
     * Additional notes
     *  -
     */
    // clang-format on
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addTwoNumbers(l1, l2, 0);
    }
};
}  // namespace solution_04
