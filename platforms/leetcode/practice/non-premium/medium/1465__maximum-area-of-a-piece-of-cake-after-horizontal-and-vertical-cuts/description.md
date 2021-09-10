---
Problem Title: 1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
Problem Tags: Array, Greedy, Sorting
Solution Url: https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given a rectangular cake of size `h x w` and two arrays of integers `horizontalCuts` and `verticalCuts` where:


* `horizontalCuts[i]` is the distance from the top of the rectangular cake to the `ith` horizontal cut and similarly, and
* `verticalCuts[j]` is the distance from the left of the rectangular cake to the `jth` vertical cut.


Return *the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays* `horizontalCuts` *and* `verticalCuts`. Since the answer can be a large number, return this **modulo** `109 + 7`.


 


**Example 1:**


![](https://assets.leetcode.com/uploads/2020/05/14/leetcode_max_area_2.png)

```

**Input:** h = 5, w = 4, horizontalCuts = [1,2,4], verticalCuts = [1,3]
**Output:** 4 
**Explanation:** The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. After you cut the cake, the green piece of cake has the maximum area.

```

**Example 2:**


![](https://assets.leetcode.com/uploads/2020/05/14/leetcode_max_area_3.png)

```

**Input:** h = 5, w = 4, horizontalCuts = [3,1], verticalCuts = [1]
**Output:** 6
**Explanation:** The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. After you cut the cake, the green and yellow pieces of cake have the maximum area.

```

**Example 3:**



```

**Input:** h = 5, w = 4, horizontalCuts = [3], verticalCuts = [3]
**Output:** 9

```

 


**Constraints:**


* `2 <= h, w <= 109`
* `1 <= horizontalCuts.length <= min(h - 1, 105)`
* `1 <= verticalCuts.length <= min(w - 1, 105)`
* `1 <= horizontalCuts[i] < h`
* `1 <= verticalCuts[i] < w`
* All the elements in `horizontalCuts` are distinct.
* All the elements in `verticalCuts` are distinct.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
