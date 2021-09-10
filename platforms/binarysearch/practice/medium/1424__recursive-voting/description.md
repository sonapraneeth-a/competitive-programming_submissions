---
Problem Title: 1424. Recursive Voting
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/recursive-voting/
Problem Tags: union find, graph
Solution Url: https://binarysearch.com/problems/recursive-voting/solutions/
IsPremium: No
Companies: Facebook
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given a list of integers `votes` representing election votes for candidates `a` and `b`. Each element in `votes` represents a vote to one of the two candidates:

- If `votes[i] < 0`, then it's a vote for `a`.
- If `votes[i] ≥ n`, then it's a vote for `b`.
- Otherwise, the vote at index `i` made the same vote as `votes[votes[i]]`.

Return the number of votes that candidate `a` received. You can assume all votes are eventually made to either `a` or `b`.

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the length of `votes`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
