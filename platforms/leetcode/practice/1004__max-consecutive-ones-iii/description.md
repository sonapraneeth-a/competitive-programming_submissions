---
Problem Title: 1004. Max Consecutive Ones III
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/max-consecutive-ones-iii/
Problem Tags: Array, Binary Search, Sliding Window, Prefix Sum
Solution Url: https://leetcode.com/problems/max-consecutive-ones-iii/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Given a binary array `nums` and an integer `k`, return *the maximum number of consecutive* `1`*'s in the array if you can flip at most* `k` `0`'s.


 


**Example 1:**



```

**Input:** nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
**Output:** 6
**Explanation:** [1,1,1,0,0,**1**,1,1,1,1,**1**]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
```

**Example 2:**



```

**Input:** nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
**Output:** 10
**Explanation:** [0,0,1,1,**1**,**1**,1,1,1,**1**,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

```

 


**Constraints:**


* `1 <= nums.length <= 105`
* `nums[i]` is either `0` or `1`.
* `0 <= k <= nums.length`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
