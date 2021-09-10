---
Problem Title: 1118. Minimum Time to Finish K Tasks
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/minimum-time-to-finish-k-tasks/
Problem Tags: heap
Solution Url: https://binarysearch.com/problems/minimum-time-to-finish-k-tasks/solutions/
IsPremium: No
Companies: Google
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given a two-dimensional list of integers `tasks` where each element has `3` integers. You are also given an integer `k`. Pick `k` rows from `tasks`, call it `S`, such that the following sum is minimized and return the sum:

```
max(S[0][0], S[1][0], ...S[k - 1][0]) +
max(S[0][1], S[1][1], ...S[k - 1][1]) +
max(S[0][2], S[1][2], ...S[k - 1][2])
```

In other words, each of the `3` columns contribute to a cost, and is calculated by taking the max value of that column in `S`. The max of an empty list is defined to be `0`.

**Constraints**
- `k ≤ n ≤ 1,000` where `n` is the length of `tasks`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
