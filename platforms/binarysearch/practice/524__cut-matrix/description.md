---
Problem Title: 524. Cut Matrix
Problem Difficulty: Hard
Problem Url: https://binarysearch.com/problems/cut-matrix/
Problem Tags: dynamic programming
Solution Url: https://binarysearch.com/problems/cut-matrix/solutions/
IsPremium: No
Companies: 
IsTemplate: No
---

<span style="color: ;">Hard</span>

# Description

You are given a matrix of `0`s and `1`s and an integer `k`. You want to divide the matrix into `k` pieces such that each piece has at least one `1` in it. You can cut it in the following way:

- First, choose a direction: vertical or horizontal
- Then, choose an index in the matrix to cut into two pieces.
- If you cut the matrix vertically, you can no longer cut the left part and can only continue cutting the right part. If you cut the matrix horizontally, you can no longer cut the top part and can only continue cutting the bottom part.

Return the number of different ways there are to divide the matrix. Mod the result by `10 ** 9 + 7`.

**Constraints**

- `n, m ≤ 20` where `n` and `m` are the number of rows and columns in `matrix`
- `k ≤ 20`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
