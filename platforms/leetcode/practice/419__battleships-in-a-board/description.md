---
Problem Title: 419. Battleships in a Board
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/battleships-in-a-board/
Problem Tags: Array, Depth-First Search, Matrix
Solution Url: https://leetcode.com/problems/battleships-in-a-board/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Given an `m x n` matrix `board` where each cell is a battleship `'X'` or empty `'.'`, return *the number of the **battleships** on* `board`.


**Battleships** can only be placed horizontally or vertically on `board`. In other words, they can only be made of the shape `1 x k` (`1` row, `k` columns) or `k x 1` (`k` rows, `1` column), where `k` can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).


 


**Example 1:**


![](https://assets.leetcode.com/uploads/2021/04/10/battelship-grid.jpg)

```

**Input:** board = [["X",".",".","X"],[".",".",".","X"],[".",".",".","X"]]
**Output:** 2

```

**Example 2:**



```

**Input:** board = [["."]]
**Output:** 0

```

 


**Constraints:**


* `m == board.length`
* `n == board[i].length`
* `1 <= m, n <= 200`
* `board[i][j]` is either `'.'` or `'X'`.


 


**Follow up:** Could you do it in one-pass, using only `O(1)` extra memory and without modifying the values `board`?




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
