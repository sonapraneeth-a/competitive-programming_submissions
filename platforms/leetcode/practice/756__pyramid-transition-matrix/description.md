---
Problem Title: 756. Pyramid Transition Matrix
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/pyramid-transition-matrix/
Problem Tags: Bit Manipulation, Depth-First Search, Breadth-First Search
Solution Url: https://leetcode.com/problems/pyramid-transition-matrix/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

We are stacking blocks to form a pyramid. Each block has a color which is a one-letter string.


We are allowed to place any color block `C` on top of two adjacent blocks of colors `A` and `B`, if and only if `ABC` is an allowed triple.


We start with a bottom row of `bottom`, represented as a single string. We also start with a list of allowed triples `allowed`. Each allowed triple is represented as a string of length `3`.


Return `true` *if we can build the pyramid all the way to the top, otherwise* `false`.


 


**Example 1:**


![](https://assets.leetcode.com/uploads/2021/08/26/pyramid1-grid.jpg)

```

**Input:** bottom = "BCD", allowed = ["BCC","CDE","CEA","FFF"]
**Output:** true
**Explanation:** The allowed stacks are shown on the right.
Starting from the bottom (level 3), we can build "CE" on level 2 and then build "E" on level 1.

```

**Example 2:**


![](https://assets.leetcode.com/uploads/2021/08/26/pyramid2-grid.jpg)

```

**Input:** bottom = "AAAA", allowed = ["AAB","AAC","BCD","BBE","DEF"]
**Output:** false
**Explanation:** The allowed stacks are shown on the right.
Starting from the bottom (level 4), there are multiple ways to build level 3 but trying all the possibilites, you will get always stuck before building level 1.

```

 


**Constraints:**


* `2 <= bottom.length <= 6`
* `0 <= allowed.length <= 216`
* `allowed[i].length == 3`
* The letters in all input strings are from the set `{'A', 'B', 'C', 'D', 'E', 'F'}`.
* All the values of `allowed` are **unique**.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
