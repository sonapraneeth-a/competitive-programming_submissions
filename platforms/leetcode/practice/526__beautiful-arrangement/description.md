---
Problem Title: 526. Beautiful Arrangement
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/beautiful-arrangement/
Problem Tags: Array, Dynamic Programming, Backtracking, Bit Manipulation, Bitmask
Solution Url: https://leetcode.com/problems/beautiful-arrangement/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Suppose you have `n` integers labeled `1` through `n`. A permutation of those `n` integers `perm` (**1-indexed**) is considered a **beautiful arrangement** if for every `i` (`1 <= i <= n`), **either** of the following is true:


* `perm[i]` is divisible by `i`.
* `i` is divisible by `perm[i]`.


Given an integer `n`, return *the **number** of the **beautiful arrangements** that you can construct*.


 


**Example 1:**



```

**Input:** n = 2
**Output:** 2
**Explanation:** 
The first beautiful arrangement is [1,2]:
    - perm[1] = 1 is divisible by i = 1
    - perm[2] = 2 is divisible by i = 2
The second beautiful arrangement is [2,1]:
    - perm[1] = 2 is divisible by i = 1
    - i = 2 is divisible by perm[2] = 1

```

**Example 2:**



```

**Input:** n = 1
**Output:** 1

```

 


**Constraints:**


* `1 <= n <= 15`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
