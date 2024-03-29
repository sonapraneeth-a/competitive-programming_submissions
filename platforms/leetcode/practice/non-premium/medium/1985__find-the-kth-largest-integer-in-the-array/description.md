---
Problem Title: 1985. Find the Kth Largest Integer in the Array
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
Problem Tags:
Solution Url: https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/solution/
IsPremium: No
IsTemplate: Yes
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given an array of strings `nums` and an integer `k`. Each string in
`nums` represents an integer without leading zeros.

Return _the string that represents the_ `kth` **\*largest integer** in\* `nums`.

**Note**: Duplicate numbers should be counted distinctly. For example, if `nums`
is `["1","2","2"]`, `"2"` is the first largest integer, `"2"` is the
second-largest integer, and `"1"` is the third-largest integer.

**Example 1:**

```markdown
**Input:** nums = ["3","6","7","10"], k = 4
**Output:** "3"
**Explanation:**
The numbers in nums sorted in non-decreasing order are ["3","6","7","10"].
The 4th largest integer in nums is "3".
```

**Example 2:**

```markdown
**Input:** nums = ["2","21","12","1"], k = 3
**Output:** "2"
**Explanation:**
The numbers in nums sorted in non-decreasing order are ["1","2","12","21"].
The 3rd largest integer in nums is "2".
```

**Example 3:**

```markdown
**Input:** nums = ["0","0"], k = 2
**Output:** "0"
**Explanation:**
The numbers in nums sorted in non-decreasing order are ["0","0"].
The 2nd largest integer in nums is "0".
```

**Constraints:**

-   `1 <= k <= nums.length <= 10^4`
-   `1 <= nums[i].length <= 100`
-   `nums[i]` consists of only digits.
-   `nums[i]` will not have any leading zeros.

# LeetCode Similar Problems

-   []()

# Useful Discussions

-   [[C++/Java/Python] 3 solutions: MinHeap, MaxHeap, QuickSelect - Clean & Concise](https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/discuss/1431847/C%2B%2BJavaPython-3-solutions%3A-MinHeap-MaxHeap-QuickSelect-Clean-and-Concise)
