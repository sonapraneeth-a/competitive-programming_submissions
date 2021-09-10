---
Problem Title: 1408. String Matching in an Array
Problem Difficulty: Easy
Problem Url: https://leetcode.com/problems/string-matching-in-an-array/
Problem Tags: String, String Matching
Solution Url: https://leetcode.com/problems/string-matching-in-an-array/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(67, 160, 71);">Easy</span>

# Description

Given an array of string `words`. Return all strings in `words` which is substring of another word in **any** order. 


String `words[i]` is substring of `words[j]`, if can be obtained removing some characters to left and/or right side of `words[j]`.


 


**Example 1:**



```

**Input:** words = ["mass","as","hero","superhero"]
**Output:** ["as","hero"]
**Explanation:** "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.

```

**Example 2:**



```

**Input:** words = ["leetcode","et","code"]
**Output:** ["et","code"]
**Explanation:** "et", "code" are substring of "leetcode".

```

**Example 3:**



```

**Input:** words = ["blue","green","bu"]
**Output:** []

```

 


**Constraints:**


* `1 <= words.length <= 100`
* `1 <= words[i].length <= 30`
* `words[i]` contains only lowercase English letters.
* It's **guaranteed** that `words[i]` will be unique.


# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
