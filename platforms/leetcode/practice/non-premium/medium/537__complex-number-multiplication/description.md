---
Problem Title: 537. Complex Number Multiplication
Problem Difficulty: Medium
Problem Url: https://leetcode.com/problems/complex-number-multiplication/
Problem Tags: Math, String, Simulation
Solution Url: https://leetcode.com/problems/complex-number-multiplication/solution/
IsPremium: No
IsTemplate: No
---

<span style="color: rgb(239, 108, 0);">Medium</span>

# Description

A [complex number](https://en.wikipedia.org/wiki/Complex_number) can be represented as a string on the form `"**real**+**imaginary**i"` where:


* `real` is the real part and is an integer in the range `[-100, 100]`.
* `imaginary` is the imaginary part and is an integer in the range `[-100, 100]`.
* `i2 == -1`.


Given two complex numbers `num1` and `num2` as strings, return *a string of the complex number that represents their multiplications*.


 


**Example 1:**



```

**Input:** num1 = "1+1i", num2 = "1+1i"
**Output:** "0+2i"
**Explanation:** (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.

```

**Example 2:**



```

**Input:** num1 = "1+-1i", num2 = "1+-1i"
**Output:** "0+-2i"
**Explanation:** (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.

```

 


**Constraints:**


* `num1` and `num2` are valid complex numbers.




# LeetCode Similar Problems

- []()

# Useful Discussions

- []()
