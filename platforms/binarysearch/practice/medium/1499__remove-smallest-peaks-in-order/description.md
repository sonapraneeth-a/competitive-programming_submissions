---
Problem Title: 1499. Remove Smallest Peaks in Order
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/remove-smallest-peaks-in-order/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/remove-smallest-peaks-in-order/solutions/
IsPremium: No
Companies: Uber
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given a list of unique integers `nums`. Return a new list created by repeatedly removing the smallest peak from `nums` and appending to a resulting list. A number `nums[i]` is called a peak if

- `nums[i] > nums[i + 1]` if `i = 0`
- `nums[i - 1] < nums[i]` if `i = n - 1`
- `nums[i - 1] < nums[i] > nums[i + 1]` otherwise

If a list has one element, then that element is considered to be a peak.

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the length of `nums`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
