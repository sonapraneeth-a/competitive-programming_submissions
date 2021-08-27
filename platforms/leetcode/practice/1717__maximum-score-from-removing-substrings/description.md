---
Problem Title: 1717. Maximum Score From Removing Substrings
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/maximum-score-from-removing-substrings/
Problem Tags: String, Stack, Greedy
Solution Url: https://leetcode.com/problems/maximum-score-from-removing-substrings/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given a string `s` and two integers `x` and `y`. You can perform two types of operations any number of times.


* Remove substring `"ab"` and gain `x` points.
	+ For example, when removing `"ab"` from `"cabxbae"` it becomes `"cxbae"`.
* Remove substring `"ba"` and gain `y` points.
	+ For example, when removing `"ba"` from `"cabxbae"` it becomes `"cabxe"`.


Return *the maximum points you can gain after applying the above operations on* `s`.


 


**Example 1:**



```

**Input:** s = "cdbcbbaaabab", x = 4, y = 5
**Output:** 19
**Explanation:**
- Remove the "ba" underlined in "cdbcbbaaabab". Now, s = "cdbcbbaaab" and 5 points are added to the score.
- Remove the "ab" underlined in "cdbcbbaaab". Now, s = "cdbcbbaa" and 4 points are added to the score.
- Remove the "ba" underlined in "cdbcbbaa". Now, s = "cdbcba" and 5 points are added to the score.
- Remove the "ba" underlined in "cdbcba". Now, s = "cdbc" and 5 points are added to the score.
Total score = 5 + 4 + 5 + 5 = 19.
```

**Example 2:**



```

**Input:** s = "aabbaaxybbaabb", x = 5, y = 4
**Output:** 20

```

 


**Constraints:**


* `1 <= s.length <= 105`
* `1 <= x, y <= 104`
* `s` consists of lowercase English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
