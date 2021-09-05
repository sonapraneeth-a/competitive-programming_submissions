---
Problem Title: 1167. Two-Dimensional List Iterator
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/two-dimensional-list-iterator/
Problem Tags: data structure
Solution Url: https://binarysearch.com/problems/two-dimensional-list-iterator/solutions/
IsPremium: No
Companies: Airbnb
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Implement an iterator of two-dimensional list of integers `lists`.

- `next()` polls the next element in the iterator, iterating over each row in `lists`
- `hasnext()` which returns whether the next element exists

For example:
```
it = TwoDimensionalIterator([[1, 2],[3, 4],[5]])
it.next() == 1
it.next() == 2
it.next() == 3
it.hasnext() == True
it.next() == 4
it.next() == 5
it.hasnext() == False
```

**Constraints**
- `n ≤ 100,000` where `n` is the number of calls to `next` and `hasnext`

**Notes**
- Your iterator should use `$\mathcal{O}(1)$` extra space.

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
