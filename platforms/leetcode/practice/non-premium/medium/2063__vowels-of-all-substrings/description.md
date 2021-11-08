---
Problem Title: 2063. Vowels of All Substrings
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/vowels-of-all-substrings/
Problem Tags: 
Solution Url: https://leetcode.com/problems/vowels-of-all-substrings/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

Given a string `word`, return *the **sum of the number of vowels** (*`'a'`, `'e'`*,* `'i'`*,* `'o'`*, and* `'u'`*)* *in every substring of* `word`.


A **substring** is a contiguous (non-empty) sequence of characters within a string.


**Note:** Due to the large constraints, the answer may not fit in a signed 32-bit integer. Please be careful during the calculations.


 


**Example 1:**



```

**Input:** word = "aba"
**Output:** 6
**Explanation:** 
All possible substrings are: "a", "ab", "aba", "b", "ba", and "a".
- "b" has 0 vowels in it
- "a", "ab", "ba", and "a" have 1 vowel each
- "aba" has 2 vowels in it
Hence, the total sum of vowels = 0 + 1 + 1 + 1 + 1 + 2 = 6. 

```

**Example 2:**



```

**Input:** word = "abc"
**Output:** 3
**Explanation:** 
All possible substrings are: "a", "ab", "abc", "b", "bc", and "c".
- "a", "ab", and "abc" have 1 vowel each
- "b", "bc", and "c" have 0 vowels each
Hence, the total sum of vowels = 1 + 1 + 1 + 0 + 0 + 0 = 3. 
```

**Example 3:**



```

**Input:** word = "ltcd"
**Output:** 0
**Explanation:** There are no vowels in any substring of "ltcd".
```

**Example 4:**



```

**Input:** word = "noosabasboosa"
**Output:** 237
**Explanation:** There are a total of 237 vowels in all the substrings.

```

 


**Constraints:**


* `1 <= word.length <= 105`
* `word` consists of lowercase English letters.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
