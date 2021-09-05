---
Problem Title: 850. Take All
Problem Difficulty: Harder
Problem Url: https://binarysearch.com/problems/take-all/
Problem Tags: prefix sum
Solution Url: https://binarysearch.com/problems/take-all/solutions/
IsPremium: No
Companies: 
IsTemplate: No
---

<span style="color: ;">Harder</span>

# Description

There are `N` items, numbered 0, 1, 2, …, `N-1`. 

You are given a two-dimensional list of size S called `sets`. You can buy the i-th set for the price `sets[i][2]`, where you receive every item between `sets[i][0]` to `sets[i][1]` inclusive.

You are also given a list of size `N` called `removals`, where you can throw away 1 instance of the `i`-th element for the price `removals[i]`.

Return the minimum cost to buy **exactly one** of every element from 0 to `N-1` inclusive, or return -1 if this isn’t possible.

The answer is guaranteed to fit in a 32-bit signed integer.

**Constraints**
- `N, S ≤ 100,000`
- `0 ≤ sets[i][0] ≤ sets[i][1] ≤ N - 1`
- `sets[i][2], removals[i] ≥ 0`


# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
