---
Problem Title: 1915. Number of Wonderful Substrings
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/number-of-wonderful-substrings/
Problem Tags: Hash Table, String, Bit Manipulation, Prefix Sum
Solution Url: https://leetcode.com/problems/number-of-wonderful-substrings/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

A **wonderful** string is a string where **at most one** letter appears an **odd** number of times.


* For example, `"ccjjc"` and `"abab"` are wonderful, but `"ab"` is not.


Given a string `word` that consists of the first ten lowercase English letters (`'a'` through `'j'`), return *the **number of wonderful non-empty substrings** in* `word`*. If the same substring appears multiple times in* `word`*, then count **each occurrence** separately.*


A **substring** is a contiguous sequence of characters in a string.


 


**Example 1:**



```

**Input:** word = "aba"
**Output:** 4
**Explanation:** The four wonderful substrings are underlined below:
- "**a**ba" -> "a"
- "a**b**a" -> "b"
- "ab**a**" -> "a"
- "**aba**" -> "aba"

```

**Example 2:**



```

**Input:** word = "aabb"
**Output:** 9
**Explanation:** The nine wonderful substrings are underlined below:
- "**a**abb" -> "a"
- "**aa**bb" -> "aa"
- "**aab**b" -> "aab"
- "**aabb**" -> "aabb"
- "a**a**bb" -> "a"
- "a**abb**" -> "abb"
- "aa**b**b" -> "b"
- "aa**bb**" -> "bb"
- "aab**b**" -> "b"

```

**Example 3:**



```

**Input:** word = "he"
**Output:** 2
**Explanation:** The two wonderful substrings are underlined below:
- "**h**e" -> "h"
- "h**e**" -> "e"

```

 


**Constraints:**


* `1 <= word.length <= 105`
* `word` consists of lowercase English letters from `'a'` to `'j'`.


# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
