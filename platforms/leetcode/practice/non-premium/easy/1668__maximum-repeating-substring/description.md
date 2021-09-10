---
Problem Title: 1668. Maximum Repeating Substring
Problem Difficulty: Easy
Problem Url: https://leetcode.com/problems/maximum-repeating-substring/
Problem Tags: String, String Matching
Solution Url: https://leetcode.com/problems/maximum-repeating-substring/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(67, 160, 71);">Easy</span>

# Description

For a string `sequence`, a string `word` is **`k`-repeating** if `word` concatenated `k` times is a substring of `sequence`. The `word`'s **maximum `k`-repeating value** is the highest value `k` where `word` is `k`-repeating in `sequence`. If `word` is not a substring of `sequence`, `word`'s maximum `k`-repeating value is `0`.


Given strings `sequence` and `word`, return *the **maximum `k`-repeating value** of `word` in `sequence`*.


 


**Example 1:**



```

**Input:** sequence = "ababc", word = "ab"
**Output:** 2
**Explanation:** "abab" is a substring in "ababc".

```

**Example 2:**



```

**Input:** sequence = "ababc", word = "ba"
**Output:** 1
**Explanation:** "ba" is a substring in "ababc". "baba" is not a substring in "ababc".

```

**Example 3:**



```

**Input:** sequence = "ababc", word = "ac"
**Output:** 0
**Explanation:** "ac" is not a substring in "ababc". 

```

 


**Constraints:**


* `1 <= sequence.length <= 100`
* `1 <= word.length <= 100`
* `sequence` and `word` contains only lowercase English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()