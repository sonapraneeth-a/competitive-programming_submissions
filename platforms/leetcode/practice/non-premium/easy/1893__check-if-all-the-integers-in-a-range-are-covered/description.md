---
Problem Title: 1893. Check if All the Integers in a Range Are Covered
Problem Difficulty: Easy
Problem Url: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
Problem Tags: Array, Hash Table, Prefix Sum
Solution Url: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(67, 160, 71);">Easy</span>

# Description

You are given a 2D integer array `ranges` and two integers `left` and `right`. Each `ranges[i] = [starti, endi]` represents an **inclusive** interval between `starti` and `endi`.


Return `true` *if each integer in the inclusive range* `[left, right]` *is covered by **at least one** interval in* `ranges`. Return `false` *otherwise*.


An integer `x` is covered by an interval `ranges[i] = [starti, endi]` if `starti <= x <= endi`.


 


**Example 1:**



```

**Input:** ranges = [[1,2],[3,4],[5,6]], left = 2, right = 5
**Output:** true
**Explanation:** Every integer between 2 and 5 is covered:
- 2 is covered by the first range.
- 3 and 4 are covered by the second range.
- 5 is covered by the third range.

```

**Example 2:**



```

**Input:** ranges = [[1,10],[10,20]], left = 21, right = 21
**Output:** false
**Explanation:** 21 is not covered by any range.

```

 


**Constraints:**


* `1 <= ranges.length <= 50`
* `1 <= starti <= endi <= 50`
* `1 <= left <= right <= 50`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
