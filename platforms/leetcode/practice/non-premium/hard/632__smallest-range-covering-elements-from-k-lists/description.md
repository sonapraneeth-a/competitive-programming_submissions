---
Problem Title: 632. Smallest Range Covering Elements from K Lists
Problem Difficulty: Hard
Problem Url: https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/
Problem Tags: Array, Hash Table, Greedy, Sliding Window, Sorting, Heap (Priority Queue)
Solution Url: https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(233, 30, 99);">Hard</span>

# Description

You have `k` lists of sorted integers in **non-decreasing order**. Find the **smallest** range that includes at least one number from each of the `k` lists.


We define the range `[a, b]` is smaller than range `[c, d]` if `b - a < d - c` **or** `a < c` if `b - a == d - c`.


 


**Example 1:**



```

**Input:** nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
**Output:** [20,24]
**Explanation:** 
List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
List 2: [0, 9, 12, 20], 20 is in range [20,24].
List 3: [5, 18, 22, 30], 22 is in range [20,24].

```

**Example 2:**



```

**Input:** nums = [[1,2,3],[1,2,3],[1,2,3]]
**Output:** [1,1]

```

**Example 3:**



```

**Input:** nums = [[10,10],[11,11]]
**Output:** [10,11]

```

**Example 4:**



```

**Input:** nums = [[10],[11]]
**Output:** [10,11]

```

**Example 5:**



```

**Input:** nums = [[1],[2],[3],[4],[5],[6],[7]]
**Output:** [1,7]

```

 


**Constraints:**


* `nums.length == k`
* `1 <= k <= 3500`
* `1 <= nums[i].length <= 50`
* `-105 <= nums[i][j] <= 105`
* `nums[i]` is sorted in **non-decreasing** order.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
