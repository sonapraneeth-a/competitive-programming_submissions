---
Problem Title: 1239. Highest Volume Stocks
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/highest-volume-stocks/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/highest-volume-stocks/solutions/
IsPremium: No
Companies: Bloomberg
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Implement a data structure `StockMarket` which has the following methods:

- `StockMarket(String[] stocks, int[] amounts)` which creates a new instance. `stocks` and `amounts` has the same length and each stock `stocks[i]` initially has `amounts[i]` volume in the market
- `add(String stock, int amount)` which accumulatively adds `stock` with volume `amount`
- `top(int k)` which returns the top `k` highest volume stocks, sorted in descending order by volume. If there are ties in volume, return the [lexicographically]{data-definition=lexicographic-list-string} smallest stocks first.

**Constraints**
- `n ≤ 100,000` where `n` is the number of calls to `add` and `top`.

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
