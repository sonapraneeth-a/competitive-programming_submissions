---
Problem Title: 1003. Check If Word Is Valid After Substitutions
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/
Problem Tags: String, Stack
Solution Url: https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Given a string `s`, determine if it is **valid**.


A string `s` is **valid** if, starting with an empty string `t = ""`, you can **transform** `t` **into** `s` after performing the following operation **any number of times**:


* Insert string `"abc"` into any position in `t`. More formally, `t` becomes `tleft + "abc" + tright`, where `t == tleft + tright`. Note that `tleft` and `tright` may be **empty**.


Return `true` *if* `s` *is a **valid** string, otherwise, return* `false`.


 


**Example 1:**



```

**Input:** s = "aabcbc"
**Output:** true
**Explanation:**
"" -> "abc" -> "aabcbc"
Thus, "aabcbc" is valid.
```

**Example 2:**



```

**Input:** s = "abcabcababcc"
**Output:** true
**Explanation:**
"" -> "abc" -> "abcabc" -> "abcabcabc" -> "abcabcababcc"
Thus, "abcabcababcc" is valid.

```

**Example 3:**



```

**Input:** s = "abccba"
**Output:** false
**Explanation:** It is impossible to get "abccba" using the operation.

```

**Example 4:**



```

**Input:** s = "cababc"
**Output:** false
**Explanation:** It is impossible to get "cababc" using the operation.

```

 


**Constraints:**


* `1 <= s.length <= 2 * 104`
* `s` consists of letters `'a'`, `'b'`, and `'c'`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
