---
Problem Title: 239. Sliding Window Maximum
Problem Difficulty: Hard
Problem Url: https://leetcode.com/problems/sliding-window-maximum/
Problem Tags: Array, Queue, Sliding Window, Heap (Priority Queue), Monotonic Queue
Solution Url: https://leetcode.com/problems/sliding-window-maximum/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(233, 30, 99);">Hard</span>

# Description

You are given an array of integers `nums`, there is a sliding window of size `k` which is moving from the very left of the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position.


Return *the max sliding window*.


 


**Example 1:**



```

**Input:** nums = [1,3,-1,-3,5,3,6,7], k = 3
**Output:** [3,3,5,5,6,7]
**Explanation:** 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       **3**
 1 [3  -1  -3] 5  3  6  7       **3**
 1  3 [-1  -3  5] 3  6  7       **5**
 1  3  -1 [-3  5  3] 6  7       **5**
 1  3  -1  -3 [5  3  6] 7       **6**
 1  3  -1  -3  5 [3  6  7]      **7**

```

**Example 2:**



```

**Input:** nums = [1], k = 1
**Output:** [1]

```

**Example 3:**



```

**Input:** nums = [1,-1], k = 1
**Output:** [1,-1]

```

**Example 4:**



```

**Input:** nums = [9,11], k = 2
**Output:** [11]

```

**Example 5:**



```

**Input:** nums = [4,-2], k = 2
**Output:** [4]

```

 


**Constraints:**


* `1 <= nums.length <= 105`
* `-104 <= nums[i] <= 104`
* `1 <= k <= nums.length`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
