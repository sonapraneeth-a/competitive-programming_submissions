---
Problem Title: 834. Coincidence Search
Problem Difficulty: Easy
Problem Url: https://binarysearch.com/problems/coincidence-search/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/coincidence-search/solutions/
IsPremium: No
Companies: Google
IsTemplate: No
---

<span style="color: ;">Easy</span>

# Description

You are given a list of unique integers `nums`. Return the number of integers that could still be successfully found using a standard binary search.

Binary search in pseudocode:

```
lo = 0
hi = nums.size - 1

while lo <= hi
 mid = floor((lo + hi) / 2)
 if nums[mid] == target
 return mid
 elif nums[mid] < target
 lo = mid + 1
 else
 hi = mid - 1
```

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the length of `nums`.

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
