---
Problem Title: 959. Regions Cut By Slashes
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/regions-cut-by-slashes/
Problem Tags: Depth-First Search, Breadth-First Search, Union Find, Graph
Solution Url: https://leetcode.com/problems/regions-cut-by-slashes/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

An `n x n` grid is composed of `1 x 1` squares where each `1 x 1` square consists of a `'/'`, `'\'`, or blank space `' '`. These characters divide the square into contiguous regions.


Given the grid `grid` represented as a string array, return *the number of regions*.


Note that backslash characters are escaped, so a `'\'` is represented as `'\\'`.


 


**Example 1:**


![](https://assets.leetcode.com/uploads/2018/12/15/1.png)

```

**Input:** grid = [" /","/ "]
**Output:** 2

```

**Example 2:**


![](https://assets.leetcode.com/uploads/2018/12/15/2.png)

```

**Input:** grid = [" /","  "]
**Output:** 1

```

**Example 3:**


![](https://assets.leetcode.com/uploads/2018/12/15/3.png)

```

**Input:** grid = ["\\/","/\\"]
**Output:** 4
**Explanation:** (Recall that because \ characters are escaped, "\\/" refers to \/, and "/\\" refers to /\.)

```

**Example 4:**


![](https://assets.leetcode.com/uploads/2018/12/15/4.png)

```

**Input:** grid = ["/\\","\\/"]
**Output:** 5
**Explanation:** (Recall that because \ characters are escaped, "\\/" refers to \/, and "/\\" refers to /\.)

```

**Example 5:**


![](https://assets.leetcode.com/uploads/2018/12/15/5.png)

```

**Input:** grid = ["//","/ "]
**Output:** 3

```

 


**Constraints:**


* `n == grid.length`
* `n == grid[i].length`
* `1 <= n <= 30`
* `grid[i][j]` is either `'/'`, `'\'`, or `' '`.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
