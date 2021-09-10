---
Problem Title: 582. DDoS Protection
Problem Difficulty: Hard
Problem Url: https://binarysearch.com/problems/ddos-protection/
Problem Tags: hash table, queue
Solution Url: https://binarysearch.com/problems/ddos-protection/solutions/
IsPremium: No
Companies: Bloomberg
IsTemplate: No
---

<span style="color: ;">Hard</span>

# Description

You are given a two-dimensional integer list `requests` where each list contains elements `[user\_id, timestamp\_sec]`. Each list represents a user's request to a website at a timestamp in seconds.

You are also given integers `u` and `g` where

- `u` is the maximum number of requests that are allowed in any `< 60` second window for a given `user\_id`.
- `g` is the maximum number of requests that are allowed in any `< 60` second window globally.

We'd like to process each request one by one and rate limit them. If there are requests at the same time by multiple users, requests with lower `user\_id` are processed first. If any request violates the above rules, it gets dropped.

Return the total number of requests that will be successfully processed.

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the length of `requests`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
