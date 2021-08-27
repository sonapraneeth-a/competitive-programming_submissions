---
Problem Title: 354. Russian Doll Envelopes
Problem Difficulty: Hard
Problem Url: https://leetcode.com/problems/russian-doll-envelopes/
Problem Tags: Array, Binary Search, Dynamic Programming, Sorting
Solution Url: https://leetcode.com/problems/russian-doll-envelopes/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(233, 30, 99);">Hard</span>

# Description

You are given a 2D array of integers `envelopes` where `envelopes[i] = [wi, hi]` represents the width and the height of an envelope.


One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope's width and height.


Return *the maximum number of envelopes you can Russian doll (i.e., put one inside the other)*.


**Note:** You cannot rotate an envelope.


 


**Example 1:**



```

**Input:** envelopes = [[5,4],[6,4],[6,7],[2,3]]
**Output:** 3
**Explanation:** The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).

```

**Example 2:**



```

**Input:** envelopes = [[1,1],[1,1],[1,1]]
**Output:** 1

```

 


**Constraints:**


* `1 <= envelopes.length <= 5000`
* `envelopes[i].length == 2`
* `1 <= wi, hi <= 104`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
