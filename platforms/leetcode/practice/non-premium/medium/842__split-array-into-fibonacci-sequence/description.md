---
Problem Title: 842. Split Array into Fibonacci Sequence
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/split-array-into-fibonacci-sequence/
Problem Tags: String, Backtracking
Solution Url: https://leetcode.com/problems/split-array-into-fibonacci-sequence/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given a string of digits `num`, such as `"123456579"`. We can split it into a Fibonacci-like sequence `[123, 456, 579]`.


Formally, a **Fibonacci-like** sequence is a list `f` of non-negative integers such that:


* `0 <= f[i] < 231`, (that is, each integer fits in a **32-bit** signed integer type),
* `f.length >= 3`, and
* `f[i] + f[i + 1] == f[i + 2]` for all `0 <= i < f.length - 2`.


Note that when splitting the string into pieces, each piece must not have extra leading zeroes, except if the piece is the number `0` itself.


Return any Fibonacci-like sequence split from `num`, or return `[]` if it cannot be done.


 


**Example 1:**



```

**Input:** num = "123456579"
**Output:** [123,456,579]

```

**Example 2:**



```

**Input:** num = "11235813"
**Output:** [1,1,2,3,5,8,13]

```

**Example 3:**



```

**Input:** num = "112358130"
**Output:** []
**Explanation:** The task is impossible.

```

**Example 4:**



```

**Input:** num = "0123"
**Output:** []
**Explanation:** Leading zeroes are not allowed, so "01", "2", "3" is not valid.

```

**Example 5:**



```

**Input:** num = "1101111"
**Output:** [11,0,11,11]
**Explanation:** The output [11, 0, 11, 11] would also be accepted.

```

 


**Constraints:**


* `1 <= num.length <= 200`
* `num` contains only digits.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
