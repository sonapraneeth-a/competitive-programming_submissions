---
Problem Title: 433. Minimum Parsing Tree
Problem Difficulty: Harder
Problem Url: https://binarysearch.com/problems/minimum-parsing-tree/
Problem Tags: tree, dynamic programming
Solution Url: https://binarysearch.com/problems/minimum-parsing-tree/solutions/
IsPremium: No
Companies: 
IsTemplate: No
---

<span style="color: ;">Harder</span>

# Description

You are given a list of unique and sorted integers `nums` representing breakpoints in a string and want to create a tree out of these rules:

- Nodes have a value `(a, b)` where `a` and `b` are breakpoints. This means the node spans from indices `[a, b)` in the string.
- The root node spans over the all breakpoints (i.e. the whole string).
- The spans of a node's left and right child are ordered, contiguous, and comprise the parent node's span.
- [Leaf]{data-definition-leaf} nodes' index of `a` in `breakpoints` is `1` before the index of `b` in `breakpoints`.

The cost of a tree is defined as the sum of `b - a` for every node in the tree. Return the minimum cost of a feasible tree.

**Constraints**

- `n ≤ 1,000` where `n` is the length of `nums`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
