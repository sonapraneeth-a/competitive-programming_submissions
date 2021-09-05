---
Problem Title: 329. Roman Numeral to Integer
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/roman-numeral-to-integer/
Problem Tags: string
Solution Url: https://binarysearch.com/problems/roman-numeral-to-integer/solutions/
IsPremium: No
Companies: Yahoo, Facebook, Amazon, Adobe, Apple, Microsoft, Linkedin, Google, Uber
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Given a string `numeral` representing a Roman numeral, convert it to an integer.

Roman numerals contain the symbols representing values in the following list:

- `"I" = 1`
- `"V" = 5`
- `"X" = 10`
- `"L" = 50`
- `"C" = 100`
- `"D" = 500`
- `"M" = 1000`

Roman numerals are typically written largest to smallest, from left to right, and can be computed by summing up the values of all the symbols. However, in some cases, when a symbol of lower value is to the left of a symbol of higher value, then the lower value is subtracted from the higher one.

There are 6 cases where this is possible:

- When `"I"` is before `"V"`, we get `4`.
- When `"I"` is before `"X"`, we get `9`.
- When `"X"` is before `"L"`, we get `40`.
- When `"X"` is before `"C"`, we get `90`.
- When `"C"` is before `"D"`, we get `400`.
- When `"C"` is before `"M"`, we get `900`.

**Constraints**

- `1 ≤ n ≤ 15` where `n` is the length of `numeral`
- `1 ≤ k ≤ 3000` where `k` is the number `numeral` represents

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
