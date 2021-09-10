---
Problem Title: 1338. Rate Limiter
Problem Difficulty: Easy
Problem Url: https://binarysearch.com/problems/rate-limiter/
Problem Tags: data structure
Solution Url: https://binarysearch.com/problems/rate-limiter/solutions/
IsPremium: No
Companies: Google, Amazon, Apple
IsTemplate: No
---

<span style="color: ;">Easy</span>

# Description

Implement a rate limiter that limits users’ requests with the following methods:

- `RateLimiter(int expire)` constructs a new rate limiter with the given `expire` time.
- `limit(int uid, int timestamp)` represents a request from user `uid` at time `timestamp` and should return whether the given user’s request fails. It should fail if the user had a successful request less than `expire` time ago.

You can assume that `timestamp` is [monotonically increasing]{data-definition=monotonically-increasing} between requests.

**Constraints**
- `n ≤ 100,000` where `n` is the number of calls to `limit`.

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
