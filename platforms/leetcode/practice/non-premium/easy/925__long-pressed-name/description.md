---
Problem Title: 925. Long Pressed Name
Problem Difficulty: Easy
Problem Url: https://leetcode.com/problems/long-pressed-name/
Problem Tags: Two Pointers, String
Solution Url: https://leetcode.com/problems/long-pressed-name/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(67, 160, 71);">Easy</span>

# Description

Your friend is typing his `name` into a keyboard. Sometimes, when typing a character `c`, the key might get *long pressed*, and the character will be typed 1 or more times.


You examine the `typed` characters of the keyboard. Return `True` if it is possible that it was your friends name, with some characters (possibly none) being long pressed.


 


**Example 1:**



```

**Input:** name = "alex", typed = "aaleex"
**Output:** true
**Explanation:** 'a' and 'e' in 'alex' were long pressed.

```

**Example 2:**



```

**Input:** name = "saeed", typed = "ssaaedd"
**Output:** false
**Explanation:** 'e' must have been pressed twice, but it wasn't in the typed output.

```

**Example 3:**



```

**Input:** name = "leelee", typed = "lleeelee"
**Output:** true

```

**Example 4:**



```

**Input:** name = "laiden", typed = "laiden"
**Output:** true
**Explanation:** It's not necessary to long press any character.

```

 


**Constraints:**


* `1 <= name.length <= 1000`
* `1 <= typed.length <= 1000`
* `name` and `typed` contain only lowercase English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
