---
Problem Title: 1405. Longest Happy String
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/longest-happy-string/
Problem Tags: String, Greedy, Heap (Priority Queue)
Solution Url: https://leetcode.com/problems/longest-happy-string/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

A string is called *happy* if it does not have any of the strings `'aaa'`, `'bbb'` or `'ccc'` as a substring.


Given three integers `a`, `b` and `c`, return **any** string `s`, which satisfies following conditions:


* `s` is *happy*and longest possible.
* `s` contains **at most** `a` occurrences of the letter `'a'`, **at most** `b` occurrences of the letter `'b'` and **at most** `c` occurrences of the letter `'c'`.
* `s`will only contain `'a'`, `'b'` and `'c'` letters.


If there is no such string `s` return the empty string `""`.


 


**Example 1:**



```

**Input:** a = 1, b = 1, c = 7
**Output:** "ccaccbcc"
**Explanation:** "ccbccacc" would also be a correct answer.

```

**Example 2:**



```

**Input:** a = 2, b = 2, c = 1
**Output:** "aabbc"

```

**Example 3:**



```

**Input:** a = 7, b = 1, c = 0
**Output:** "aabaa"
**Explanation:** It's the only correct answer in this case.

```

 


**Constraints:**


* `0 <= a, b, c <= 100`
* `a + b + c > 0`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
