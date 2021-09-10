---
Problem Title: 809. Revolving Door
Problem Difficulty: Easy
Problem Url: https://binarysearch.com/problems/revolving-door/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/revolving-door/solutions/
IsPremium: No
Companies: Amazon
IsTemplate: No
---

<span style="color: ;">Easy</span>

# Description

You are given a list of list of integers `requests`. `requests[i]` contains `[time, direction]` meaning at time `time`, a person arrived at the door and either wanted to go in (`1`) or go out (`0`).

Given that there's only one door and it takes one time unit to use the door, we have the following rules to resolve conflicts:

- The door starts with `in` position and then is set to the position used by the last person.
- If there's only one person at the door at given time, they can use the door.
- When two or more people want to go in, earliest person goes first and then the direction previously used holds precedence.
- If no one uses the door for one time unit, it reverts back to the starting `in` position.

Return a sorted list of lists where each element contains `[time, direction]`, meaning at `time`, a person either went in or out.

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the length of `requests`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
