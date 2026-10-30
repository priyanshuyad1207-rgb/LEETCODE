# 34. Find First and Last Position of Element in Sorted Array

**LeetCode Problem:** [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

**Difficulty:** Medium

**Topic:** Array, Binary Search

## Problem Description

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given target value.

If the target is not found in the array, return `[-1, -1]`.

You must write an algorithm with O(log n) runtime complexity.

## Example 1

**Input:**

```text
nums = [5,7,7,8,8,10], target = 8
```

**Output:**

```text
[3,4]
```

## Example 2

**Input:**

```text
nums = [5,7,7,8,8,10], target = 6
```

**Output:**

```text
[-1,-1]
```

## Example 3

**Input:**

```text
nums = [], target = 0
```

**Output:**

```text
[-1,-1]
```

## Approach: Binary Search

1. Use binary search to find the first occurrence of the target.
2. Use another binary search to find the last occurrence.
3. If the target does not exist, return `[-1, -1]`.
4. Otherwise, return the first and last positions.

## Complexity Analysis

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1)

## Solution

Language: C++

File: `solution.cpp`

## Key Learning

* Binary Search
* First and Last Occurrence
* Searching in Sorted Arrays
* Optimizing

