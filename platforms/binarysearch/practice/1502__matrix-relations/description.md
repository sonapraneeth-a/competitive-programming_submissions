---
Problem Title: 1502. Matrix Relations
Problem Difficulty: Hard
Problem Url: https://binarysearch.com/problems/matrix-relations/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/matrix-relations/solutions/
IsPremium: No
Companies: Google
IsTemplate: No
---

<span style="color: ;">Hard</span>

# Description

You are given an integer `n` and a two-dimensional list of integers `relations`. You want to fill an `n` by `n` matrix using `relations`, which defines the spatial ordering of some cell values in the matrix. Each element `relations[i]` contains `(x, y, type)` which means that

- `x` is left of `y` if `type = 0`
- `x` is right of `y` if `type = 1`
- `x` is above `y` if `type = 2`
- `x` is below `y` if `type = 3`

Return the `n` by `n` matrix following the constraints in `relations`. Since some cells may not have a value, set it to `-1`. You can assume each defined cell in the matrix will have a unique value. Also, there is one unique solution.

**Constraints**
- `n ≤ 500`
- `1 ≤ m ≤ 100,000` where `m` is the length of `relations`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
