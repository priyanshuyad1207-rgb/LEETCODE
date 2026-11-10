# 0074 - Search a 2D Matrix

**LeetCode Problem:** [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

## 📝 Problem Description

You are given an `m x n` integer matrix with the following properties:

1. Each row is sorted in ascending order.
2. The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true` if the target exists in the matrix. Otherwise, return `false`.

You must write an algorithm with **O(log(m × n))** runtime complexity.

## 💡 Examples

**Example 1:**

Input:
```cpp
matrix = [[1,3,5,7],
          [10,11,16,20],
          [23,30,34,60]]
target = 3
```

Output:
```cpp
true
```

Explanation: The value `3` exists in the matrix.

**Example 2:**

Input:
```cpp
matrix = [[1,3,5,7],
          [10,11,16,20],
          [23,30,34,60]]
target = 13
```

Output:
```cpp
false
```

Explanation: The value `13` does not exist in the matrix.

## 🚀 Approach: Binary Search

We can treat the entire 2D matrix as a sorted 1D array and apply Binary Search.

**Steps:**

1. Find the number of rows (`m`) and columns (`n`).
2. Initialize `start = 0` and `end = m * n - 1`.
3. Calculate the middle index.
4. Convert the 1D index into 2D coordinates:
   - `row = mid / n`
   - `col = mid % n`
5. Compare `matrix[row][col]` with the target.
6. If equal, return `true`.
7. If the middle element is smaller, search the right half.
8. Otherwise, search the left half.
9. If the target is not found, return `false`.

## 💻 Language

- **C++**

## ⏱️ Complexity Analysis

- **Time Complexity:** O(log(m × n)) – Binary Search reduces the search space by half in every iteration.
- **Space Complexity:** O(1) – Only a few extra variables are used.

## 📚 Topics Covered

- Array
- Matrix
- Binary Search
- 2D Array
- Searching Algorithms

## 🔗 LeetCode Link

[74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
