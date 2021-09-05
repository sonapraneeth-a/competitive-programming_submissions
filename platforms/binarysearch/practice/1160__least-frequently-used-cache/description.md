---
Problem Title: 1160. Least Frequently Used Cache
Problem Difficulty: Hard
Problem Url: https://binarysearch.com/problems/least-frequently-used-cache/
Problem Tags: linked list, hash table, data structure
Solution Url: https://binarysearch.com/problems/least-frequently-used-cache/solutions/
IsPremium: No
Companies: Google, Amazon, Bloomberg
IsTemplate: No
---

<span style="color: ;">Hard</span>

# Description

Implement a least frequently used cache with the following methods:

- `LFUCache(int capacity)` constructs a new instance of a LFU cache with the given capacity.
- `get(int key)` retrieves the value associated with the key `key`. If it does not exist, return `-1`. As a side effect, this `key`'s usage is incremented (used for eviction).
- `set(int key, int val)` updates the key `key` with value `val`. If updating this key-value pair exceeds `capacity`, then evicts the least frequently used key-value pair. If there is more than one key that's been used least frequently used, it should use the least recently used key.

Each method should be done in `$\mathcal{O}(1)$` time.

**Constraints**
- `n ≤ 100,000` where `n` is the number of calls to `get` and `set`.

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
