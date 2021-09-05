---
Problem Title: 1262. Lazy Run-Length Decoding
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/lazy-run-length-decoding/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/lazy-run-length-decoding/solutions/
IsPremium: No
Companies: Google
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Implement a data structure `RunLengthDecoder` which implements the following methods:

- `RunLengthDecoder(string s)` which takes a string `s` that is [run-length encoded]{data-definition=run-length-encoding}.
- `string value(int i)` which returns the character at index `i` of the run-length decoded version of `s`.
- `string valueInRange(string c, int i, int j)` which returns the first lowercase alphabet character that is greater than or equal to `c` from the range `[i, j)` of the decoded string. You can assume that the range contains characters that are in ascending order. If no such character exists, return `"?"`

**Constraints**
- `n ≤ 100,000` where `n` is the length of `s`
- `k ≤ 100,000` where `k` is the number of calls to `value` and `valueInRange`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
