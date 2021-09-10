---
Problem Title: 1526. Best Currency Path
Problem Difficulty: Hard
Problem Url: https://binarysearch.com/problems/best-currency-path/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/best-currency-path/solutions/
IsPremium: No
Companies: Coinbase
IsTemplate: No
---

<span style="color: ;">Hard</span>

# Description

You are given two strings `source` and `target`, as well as three lists of the same length `sources`, `targets` and `rates`.

We can convert one unit of `sources[i]` currency to `targets[i]` currency for `rates[i]`.

Given that you currently have one unit of `source` currency return the maximum `target` currency we can have through series of exchanges. If there is any arbitrage anywhere in the graph (there is a cycle of exchanges starting with `source` where we end up with more than we started off with), even if there is no path to `target` currency, return `-1`. Otherwise, if there is no path to `target` return `0`.

**Constraints**
- `0 ≤ n ≤ 2,000` where `n` is the number of unique currencies
- `0 ≤ m ≤ 2,000` where `m` is the length of `sources`, `targets`, `rates`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
