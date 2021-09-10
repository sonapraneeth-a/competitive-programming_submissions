---
Problem Title: 241. Different Ways to Add Parentheses
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/different-ways-to-add-parentheses/
Problem Tags: Math, String, Dynamic Programming, Recursion, Memoization
Solution Url: https://leetcode.com/problems/different-ways-to-add-parentheses/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Given a string `expression` of numbers and operators, return *all possible results from computing all the different possible ways to group numbers and operators*. You may return the answer in **any order**.


 


**Example 1:**



```

**Input:** expression = "2-1-1"
**Output:** [0,2]
**Explanation:**
((2-1)-1) = 0 
(2-(1-1)) = 2

```

**Example 2:**



```

**Input:** expression = "2*3-4*5"
**Output:** [-34,-14,-10,-10,10]
**Explanation:**
(2*(3-(4*5))) = -34 
((2*3)-(4*5)) = -14 
((2*(3-4))*5) = -10 
(2*((3-4)*5)) = -10 
(((2*3)-4)*5) = 10

```

 


**Constraints:**


* `1 <= expression.length <= 20`
* `expression` consists of digits and the operator `'+'`, `'-'`, and `'*'`.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
