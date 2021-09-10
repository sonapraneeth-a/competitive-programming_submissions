---
Problem Title: 1357. String Equivalence Relations
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/string-equivalence-relations/
Problem Tags: string, graph, union find
Solution Url: https://binarysearch.com/problems/string-equivalence-relations/solutions/
IsPremium: No
Companies: Amazon
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given three lowercase alphabet strings `a`, `b` and `target`. Strings `a` and `b` have the same length and are defined to be equivalent: `a[i] = b[i]`. For example, if `a = "abc"` and `b = "xyz"`, then `"a" = "x"`, `"b" = "y"` and `"c" = "z"`.

Also, we can make the following kinds of inferences for characters:

- `c = c`
- `a = b` implies `b = a`
- `a = b` and `b = c` implies `a = c`

Return the smallest [lexicographically]{data-definition=lexicographic-list-string} equivalent string for `target`.

**Constraints**
- `n ≤ 1,000` where `n` is the length of `a` and `b`
- `m ≤ 1,000` where `m` is the length of `target`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
