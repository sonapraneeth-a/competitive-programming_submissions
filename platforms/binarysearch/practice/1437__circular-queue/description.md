---
Problem Title: 1437. Circular Queue
Problem Difficulty: Medium
Problem Url: https://binarysearch.com/problems/circular-queue/
Problem Tags: data structure
Solution Url: https://binarysearch.com/problems/circular-queue/solutions/
IsPremium: No
Companies: Amazon, Facebook, Google
IsTemplate: No
---

<span style="color: ;">Medium</span>

# Description

Implement a circular queue with the following methods:

- `CircularQueue(int capacity)` which creates an instance of a circular queue with size `capacity`. Circular queues are implemented using an array which holds the enqueued values with pointers pointing to the start and end of the queue. When the queue reaches the end of the array, it will start to fill items from the start of the array if they were dequeued.
- `boolean enqueue(int val)` which adds `val` to the queue if it has space. If the queue is full, return `false` to denote it can't be added and return `true` otherwise.
- `boolean dequeue()` which removes the first element that was enqueued. If the queue is empty, return `false` to denote it can't be removed and return `true` otherwise.
- `int front()` which returns the first element that was enqueued. If the queue is empty, return `-1`.
- `int top()` which returns the last element that was enqueued. If the queue is empty, return `-1`.
- `boolean isFull()` which returns whether the queue has `capacity` elements.
- `boolean isEmpty()` which returns whether the queue has no elements.

**Constraints**
- `0 ≤ n ≤ 100,000` where `n` is the number of calls to the queue

# BinarySearch Similar Problems

- []()

# Useful Discussions

- []()
