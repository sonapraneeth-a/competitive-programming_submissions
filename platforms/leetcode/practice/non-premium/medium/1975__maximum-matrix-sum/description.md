---
Problem Title: 1975. Maximum Matrix Sum
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/maximum-matrix-sum/
Problem Tags: Greedy, Matrix
Solution Url: https://leetcode.com/problems/maximum-matrix-sum/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given an `n x n` integer `matrix`. You can do the following operation
**any** number of times:

-   Choose any two **adjacent** elements of `matrix` and **multiply** each of
    them by `-1`.

Two elements are considered **adjacent** if and only if they share a **border**.

Your goal is to **maximize** the summation of the matrix's elements. Return _the
**maximum** sum of the matrix's elements using the operation mentioned above._

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/07/16/pc79-q2ex1.png)

```markdown
**Input:** matrix = [[1,-1],[-1,1]]
**Output:** 4
**Explanation:** We can follow the following steps to reach sum equals 4:

-   Multiply the 2 elements in the first row by -1.
-   Multiply the 2 elements in the first column by -1.
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/07/16/pc79-q2ex2.png)

```markdown
**Input:** matrix = [[1,2,3],[-1,-2,-3],[1,2,3]]
**Output:** 16
**Explanation:** We can follow the following step to reach sum equals 16:

-   Multiply the 2 last elements in the second row by -1.
```

**Constraints:**

-   `n == matrix.length == matrix[i].length`
-   `2 <= n <= 250`
-   `-10^5 <= matrix[i][j] <= 10^5`

# LeetCode Similar Problems

-   []()

# Useful Discussions

-   [3 Rules](https://leetcode.com/problems/maximum-matrix-sum/discuss/1420247/3-Rules)
