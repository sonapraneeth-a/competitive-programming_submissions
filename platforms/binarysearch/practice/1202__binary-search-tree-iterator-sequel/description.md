---
Problem Title: 1202. Binary Search Tree Iterator Sequel
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/binary-search-tree-iterator-sequel/
Problem Tags: tree, data structure
Solution Url: https://binarysearch.com/problems/binary-search-tree-iterator-sequel/solutions/
IsPremium: No
Companies: Facebook
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Implement a binary search tree iterator with the following methods:

- `next` returns the next smallest element in the tree
- `hasnext` returns whether there is a next element in the iterator
- `prev` returns the next bigger element in the tree
- `hasprev` returns whether there is a previous element in the iterator

For example, given the following tree `root`

```
 4
 / \
 2 7
 /
 5
```

Then we have
```
it = BSTIterator(root)
it.next() == 2
it.next() == 4
it.hasnext() == True
it.next() == 5
it.next() == 7
it.hasnext() == False
it.hasprev() == True
it.prev() == 5
```


# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
