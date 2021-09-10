---
Problem Title: 1734. Decode XORed Permutation
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/decode-xored-permutation/
Problem Tags: Array, Bit Manipulation
Solution Url: https://leetcode.com/problems/decode-xored-permutation/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

There is an integer array `perm` that is a permutation of the first `n` positive integers, where `n` is always **odd**.


It was encoded into another integer array `encoded` of length `n - 1`, such that `encoded[i] = perm[i] XOR perm[i + 1]`. For example, if `perm = [1,3,2]`, then `encoded = [2,1]`.


Given the `encoded` array, return *the original array* `perm`. It is guaranteed that the answer exists and is unique.


 


**Example 1:**



```

**Input:** encoded = [3,1]
**Output:** [1,2,3]
**Explanation:** If perm = [1,2,3], then encoded = [1 XOR 2,2 XOR 3] = [3,1]

```

**Example 2:**



```

**Input:** encoded = [6,5,4,6]
**Output:** [2,4,1,5,3]

```

 


**Constraints:**


* `3 <= n < 105`
* `n` is odd.
* `encoded.length == n - 1`




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
