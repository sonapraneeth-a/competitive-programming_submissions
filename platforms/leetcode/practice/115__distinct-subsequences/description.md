---
Problem Title: 115. Distinct Subsequences
Problem Difficulty: Hard
Problem Url: https://leetcode.com/problems/distinct-subsequences/
Problem Tags: String, Dynamic Programming
Solution Url: https://leetcode.com/problems/distinct-subsequences/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(233, 30, 99);">Hard</span>

# Description

Given two strings `s` and `t`, return *the number of distinct subsequences of `s` which equals `t`*.


A string's **subsequence** is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the remaining characters' relative positions. (i.e., `"ACE"` is a subsequence of `"ABCDE"` while `"AEC"` is not).


It is guaranteed the answer fits on a 32-bit signed integer.


 


**Example 1:**



```

**Input:** s = "rabbbit", t = "rabbit"
**Output:** 3
**Explanation:**
As shown below, there are 3 ways you can generate "rabbit" from S.
**rabb**b**it**
**ra**b**bbit**
**rab**b**bit**

```

**Example 2:**



```

**Input:** s = "babgbag", t = "bag"
**Output:** 5
**Explanation:**
As shown below, there are 5 ways you can generate "bag" from S.
**ba**b**g**bag
**ba**bgba**g**
**b**abgb**ag**
ba**b**gb**ag**
babg**bag**
```

 


**Constraints:**


* `1 <= s.length, t.length <= 1000`
* `s` and `t` consist of English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()