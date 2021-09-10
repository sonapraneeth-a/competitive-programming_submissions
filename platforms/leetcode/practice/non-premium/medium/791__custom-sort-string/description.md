---
Problem Title: 791. Custom Sort String
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/custom-sort-string/
Problem Tags: Hash Table, String, Sorting
Solution Url: https://leetcode.com/problems/custom-sort-string/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given two strings order and s. All the words of `order` are **unique** and were sorted in some custom order previously.


Permute the characters of `s` so that they match the order that `order` was sorted. More specifically, if a character `x` occurs before a character `y` in `order`, then `x` should occur before `y` in the permuted string.


Return *any permutation of* `s` *that satisfies this property*.


 


**Example 1:**



```

**Input:** order = "cba", s = "abcd"
**Output:** "cbad"
**Explanation:** 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

```

**Example 2:**



```

**Input:** order = "cbafg", s = "abcd"
**Output:** "cbad"

```

 


**Constraints:**


* `1 <= order.length <= 26`
* `1 <= s.length <= 200`
* `order` and `s` consist of lowercase English letters.
* All the characters of `order` are **unique**.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
