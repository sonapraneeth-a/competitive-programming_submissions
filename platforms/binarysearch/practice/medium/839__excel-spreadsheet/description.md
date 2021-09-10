---
Problem Title: 839. Excel Spreadsheet
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/excel-spreadsheet/
Problem Tags: array
Solution Url: https://binarysearch.com/problems/excel-spreadsheet/solutions/
IsPremium: No
Companies: Zenefits
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

You are given a two-dimensional list of strings `matrix` representing an excel spreadsheet. Return the same list with all cells and formulas computed. An excel spreadsheet looks like this:

```
 A B C
1 [[B1, 2, 0],
2 [3, 5, =A2+A1]]
```

In excel the columns are named `A, B, C...` and rows are `1, 2, 3...`.

Each cell will either contain an integer, a reference to another cell (Ex. `'B1"`), or an excel formula for a binary operation with `"+"` or `"-"` between numbers or cell reference. (Ex. `"=A2+2"`, `"=A3-B1"`, or `"=1+3"`)

You can assume cells are well-formatted, there are no cycles, and all cells are within the bounds of the array.

**Constraints**
- `n, m ≤ 26` where `n` is the number of rows in `matrix`, `m` is the number of columns in `matrix`

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
