---
Problem Title: 521. Longest Uncommon Subsequence I
Problem Difficulty: Easy
Problem Url: https://leetcode.com/problems/longest-uncommon-subsequence-i/
Problem Tags: String
Solution Url: https://leetcode.com/problems/longest-uncommon-subsequence-i/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(67, 160, 71);">Easy</span>

# Description

Given two strings `a` and `b`, return *the length of the **longest uncommon subsequence** between* `a` *and* `b`. If the longest uncommon subsequence does not exist, return `-1`.


An **uncommon subsequence** between two strings is a string that is a **subsequence of one but not the other**.


A **subsequence** of a string `s` is a string that can be obtained after deleting any number of characters from `s`.


* For example, `"abc"` is a subsequence of `"aebdc"` because you can delete the underlined characters in `"aebdc"` to get `"abc"`. Other subsequences of `"aebdc"` include `"aebdc"`, `"aeb"`, and `""` (empty string).


 


**Example 1:**



```

**Input:** a = "aba", b = "cdc"
**Output:** 3
**Explanation:** One longest uncommon subsequence is "aba" because "aba" is a subsequence of "aba" but not "cdc".
Note that "cdc" is also a longest uncommon subsequence.

```

**Example 2:**



```

**Input:** a = "aaa", b = "bbb"
**Output:** 3
**Explanation:** The longest uncommon subsequences are "aaa" and "bbb".

```

**Example 3:**



```

**Input:** a = "aaa", b = "aaa"
**Output:** -1
**Explanation:** Every subsequence of string a is also a subsequence of string b. Similarly, every subsequence of string b is also a subsequence of string a.

```

 


**Constraints:**


* `1 <= a.length, b.length <= 100`
* `a` and `b` consist of lower-case English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()