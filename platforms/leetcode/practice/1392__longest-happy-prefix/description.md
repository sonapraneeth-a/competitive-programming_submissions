---
Problem Title: 1392. Longest Happy Prefix
Problem Difficulty: Hard
Problem Url: https://leetcode.com/problems/longest-happy-prefix/
Problem Tags: String, Rolling Hash, String Matching, Hash Function
Solution Url: https://leetcode.com/problems/longest-happy-prefix/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(233, 30, 99);">Hard</span>

# Description

A string is called a **happy prefix** if is a **non-empty** prefix which is also a suffix (excluding itself).


Given a string `s`, return *the **longest happy prefix** of* `s`. Return an empty string `""` if no such prefix exists.


 


**Example 1:**



```

**Input:** s = "level"
**Output:** "l"
**Explanation:** s contains 4 prefix excluding itself ("l", "le", "lev", "leve"), and suffix ("l", "el", "vel", "evel"). The largest prefix which is also suffix is given by "l".

```

**Example 2:**



```

**Input:** s = "ababab"
**Output:** "abab"
**Explanation:** "abab" is the largest prefix which is also suffix. They can overlap in the original string.

```

**Example 3:**



```

**Input:** s = "leetcodeleet"
**Output:** "leet"

```

**Example 4:**



```

**Input:** s = "a"
**Output:** ""

```

 


**Constraints:**


* `1 <= s.length <= 105`
* `s` contains only lowercase English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
