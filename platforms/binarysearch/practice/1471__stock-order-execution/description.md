---
Problem Title: 1471. Stock Order Execution
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/stock-order-execution/
Problem Tags: 
Solution Url: https://binarysearch.com/problems/stock-order-execution/solutions/
IsPremium: No
Companies: Robinhood
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given a two-dimensional list of integers `orders`. Each element `orders[i]` contains `[price, amount, type]` meaning that there's an order to either buy `(type = 0)` or sell `(type = 1)` `amount` number of stocks at price `price`.

A buy order can be executed if there is a sell order with a price that is less than or equal to the price of the buy order. Similarly, a sell order can be executed if there is a corresponding buy order with a price that is greater than or equal to the price of the sell order. An order should be executed immediately if possible but if it's not possible, you should keep track of this order to be processed at a later time. You should fill the order at the best price for the user. That is, a buy order should execute at the lowest possible price while a sell order should sell at the highest possible price when the order is requested.

Return the total number of stocks that will be executed.

**Constraints**
- `0 ≤ n ≤ 200,000` where `n` is the length of `orders`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
