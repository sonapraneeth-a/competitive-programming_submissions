---
Problem Title: 503. Weekly Contest
Problem Difficulty: Harder
Problem Url: https://binarysearch.com/problems/weekly-contest/
Problem Tags: math, dynamic programming
Solution Url: https://binarysearch.com/problems/weekly-contest/solutions/
IsPremium: No
Companies: 
IsTemplate: No
---

<span style="color: ;">Harder</span>

# Description

You are in a programming contest with multiple problems but the contest is over when you **solve** one problem.

You are given two lists of integers of the same length, `points` and `chances`. For the `i`th problem, you have a `chances[i]`% chance of solving it for `points[i]` points. You are also given an integer `k` representing the number of problems you can **attempt**. You cannot attempt the same problem twice.

Assuming optimal strategy, return the expected value of the number of points you can get in the contest, rounded down to the nearest integer.

**Constraints**

- `n ≤ 1,000` where `n` is the length of `points` and `chances.
- `k ≤ 50`

----
The expected value of attempting the `i`th problem is `points[i] * chances[i] / 100.0`, and it represents the number of points you'd get on average.

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
