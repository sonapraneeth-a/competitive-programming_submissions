---
Problem Title: 916. Word Subsets
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/word-subsets/
Problem Tags: Array, Hash Table, String
Solution Url: https://leetcode.com/problems/word-subsets/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

You are given two string arrays `words1` and `words2`.


A string `b` is a **subset** of string `a` if every letter in `b` occurs in `a` including multiplicity.


* For example, `"wrr"` is a subset of `"warrior"` but is not a subset of `"world"`.


A string `a` from `words1` is **universal** if for every string `b` in `words2`, `b` is a subset of `a`.


Return an array of all the **universal** strings in `words1`. You may return the answer in **any order**.


 


**Example 1:**



```
**Input:** words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"]
**Output:** ["facebook","google","leetcode"]

```
**Example 2:**



```
**Input:** words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["l","e"]
**Output:** ["apple","google","leetcode"]

```
**Example 3:**



```
**Input:** words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","oo"]
**Output:** ["facebook","google"]

```
**Example 4:**



```
**Input:** words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["lo","eo"]
**Output:** ["google","leetcode"]

```
**Example 5:**



```
**Input:** words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["ec","oc","ceo"]
**Output:** ["facebook","leetcode"]

```

 


**Constraints:**


* `1 <= words1.length, words2.length <= 104`
* `1 <= words1[i].length, words2[i].length <= 10`
* `words1[i]` and `words2[i]` consist only of lowercase English letters.
* All the strings of `words1` are **unique**.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
