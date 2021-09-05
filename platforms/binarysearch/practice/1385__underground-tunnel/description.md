---
Problem Title: 1385. Underground Tunnel
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/underground-tunnel/
Problem Tags: hash table, data structure
Solution Url: https://binarysearch.com/problems/underground-tunnel/solutions/
IsPremium: No
Companies: Bloomberg
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Implement a data structure with the following methods:

- `void checkIn(int userId, String station, int timestamp)` which means user `userId` checked in to station `station` at time `timestamp`. A user can only be checked in at one station at a time. 
- `void checkOut(int userId, String station, int timestamp)` which means user `userId` checked out of station `station` at time `timestamp`.
- `float averageTime(String start, String end)` returns the average time for a person to move between station `start` and `end`.

You can assume that for a given user, `checkIn` always occurs before `checkOut`. Also, `averageTime` will only be called if at least one person travelled between the two stations.

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the number of calls to `checkIn`, `checkOut` and `averageTime`.


# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
