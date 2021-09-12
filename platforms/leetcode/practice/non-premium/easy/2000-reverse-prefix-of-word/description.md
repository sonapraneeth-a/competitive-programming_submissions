---
Problem Title: 2000. Reverse Prefix of Word
Problem Difficulty: Easy
Problem Url: https://leetcode.com/problems/reverse-prefix-of-word/
Problem Tags:
Solution Url: https://leetcode.com/problems/reverse-prefix-of-word/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(67, 160, 71);">Easy</span>

# Description

Given a **0-indexed** string `word` and a character `ch`, **reverse** the
segment of `word` that starts at index `0` and ends at the index of the
**first occurrence** of `ch` (**inclusive**). If the character `ch` does not
exist in `word`, do nothing.

-   For example, if `word = "abcdefd"` and `ch = "d"`, then you should **reverse**
    the segment that starts at `0` and ends at `3` (**inclusive**). The resulting
    string will be `"dcbaefd"`.

Return _the resulting string_.

**Example 1:**

```markdown
**Input:** word = "abcdefd", ch = "d"
**Output:** "dcbaefd"
**Explanation:** The first occurrence of "d" is at index 3.
Reverse the part of word from 0 to 3 (inclusive), the resulting string is
"dcbaefd".
```

**Example 2:**

```markdown
**Input:** word = "xyxzxe", ch = "z"
**Output:** "zxyxxe"
**Explanation:** The first and only occurrence of "z" is at index 3.
Reverse the part of word from 0 to 3 (inclusive), the resulting string is
"zxyxxe".
```

**Example 3:**

```markdown
**Input:** word = "abcd", ch = "z"
**Output:** "abcd"
**Explanation:** "z" does not exist in word.
You should not do any reverse operation, the resulting string is "abcd".
```

**Constraints:**

-   `1 <= word.length <= 250`
-   `word` consists of lowercase English letters.
-   `ch` is a lowercase English letter.

# LeetCode Similar Problems

-   []()

# Useful Discussions

-   []()