# 0033-Search in Rotated Sorted Array

**LeetCode Problem:** [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

**Difficulty:** Medium **Topic:** Array, Binary Search

## 📌 Problem Statement

There is an integer array `nums` sorted in ascending order (with distinct values).

Before being passed to your function, `nums` is possibly rotated at an unknown pivot index.

Given the array `nums` and an integer `target`, return the index of `target` if it is present in `nums`, or `-1` if it is not present.

You must write an algorithm with **O(log n)** runtime complexity.

## 💡 Approach: Binary Search

1. Initialize `start = 0` and `end = n - 1`.
2. Calculate the middle index.
3. If `nums[mid] == target`, return `mid`.
4. Check which half of the array is sorted:

   * If `nums[start] <= nums[mid]`, the left half is sorted.
   * Otherwise, the right half is sorted.
5. Check whether the target lies within the sorted half.
6. Update `start` or `end` accordingly.
7. If the target is not found, return `-1`.


## ⏱️ Complexity Analysis

* **Time Complexity:** O(log N) – Binary Search reduces the search space by half in every iteration.
* **Space Complexity:** O(1) – No extra space is used.

## 🎯 Key Learning

* Understanding Binary Search.
* Searching in a Rotated Sorted Array.
* Identifying sorted and unsorted halves.
* Applying conditional binary search.
* Reducing time complexity from O(N) to O(log N).

**Pattern:** Modified Binary Search on Rotated Sorted Array.

