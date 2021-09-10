---
Problem Title: 306. Additive Number
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/additive-number/
Problem Tags: String, Backtracking
Solution Url: https://leetcode.com/problems/additive-number/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Additive number is a string whose digits can form additive sequence.


A valid additive sequence should contain **at least** three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.


Given a string containing only digits `'0'-'9'`, write a function to determine if it's an additive number.


**Note:** Numbers in the additive sequence **cannot** have leading zeros, so sequence `1, 2, 03` or `1, 02, 3` is invalid.


 


**Example 1:**



```

**Input:** "112358"
**Output:** true
**Explanation:** The digits can form an additive sequence: 1, 1, 2, 3, 5, 8. 
             1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8

```

**Example 2:**



```

**Input:** "199100199"
**Output:** true
**Explanation:** The additive sequence is: 1, 99, 100, 199. 
             1 + 99 = 100, 99 + 100 = 199

```

 


**Constraints:**


* `num` consists only of digits `'0'-'9'`.
* `1 <= num.length <= 35`


**Follow up:**  

How would you handle overflow for very large input integers?




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
