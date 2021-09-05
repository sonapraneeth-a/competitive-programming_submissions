---
Problem Title: 1525. Blocked Pipeline
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/blocked-pipeline/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/blocked-pipeline/solutions/
IsPremium: No
Companies: Google
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given an integer `n` and a two-dimensional list of integers `requests`. Consider a `2 x n` matrix `m` where each cell can either be blocked or unblocked. It starts off as completely unblocked. Each element in `requests` contains `[row, col, type]` meaning that `m[row][col]` becomes blocked if `type = 1` and it becomes unblocked if `type = 0`.

You want to process requests one by one and after processing each one check whether there is an unblocked path from left to right. That is, whether you can start off either `m[0][0]` or `m[1][0]` and on each step either move right, up, or down and then end up at either `m[0][n - 1]` or `m[1][n - 1]`. Return the number of requests that result in such unblocked path after processing

**Constraints**
- `1 ≤ n ≤ 100,000`
- `0 ≤ r ≤ 100,000` where `r` is the length of `requests`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
