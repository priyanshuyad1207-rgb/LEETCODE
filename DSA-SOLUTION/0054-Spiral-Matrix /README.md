# 0054 - Spiral Matrix

**LeetCode Problem:** [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

## 📌 Problem Description

Given an `m x n` matrix, return all elements of the matrix in spiral order.

Spiral order means traversing the matrix starting from the top-left corner, moving:

1. Left to Right
2. Top to Bottom
3. Right to Left
4. Bottom to Top

Repeat this process until all elements are visited.

### Example 1:

**Input:**
```cpp
matrix = [[1,2,3],[4,5,6],[7,8,9]]
```

**Output:**
```cpp
[1,2,3,6,9,8,7,4,5]
```

**Explanation:**

Elements are traversed in clockwise spiral order.

### Example 2:

**Input:**
```cpp
matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
```

**Output:**
```cpp
[1,2,3,4,8,12,11,10,9,5,6,7]
```

## 💡 Approach: Boundary Traversal

We use four boundaries to traverse the matrix in spiral order.

- `top` – Represents the first row.
- `bottom` – Represents the last row.
- `left` – Represents the first column.
- `right` – Represents the last column.

### Steps:

1. Traverse the top row from left to right, then increment `top`.
2. Traverse the right column from top to bottom, then decrement `right`.
3. Traverse the bottom row from right to left, then decrement `bottom`.
4. Traverse the left column from bottom to top, then increment `left`.
5. Repeat until all boundaries cross each other.

## ⏱️ Complexity Analysis

- **Time Complexity:** O(m × n) – Every matrix element is visited exactly once.
- **Space Complexity:** O(1) auxiliary space, excluding the output array.

## 🛠️ Language Used

- C++

## 📚 Topics Covered

- Array
- Matrix
- Simulation
- Boundary Traversal

## 🔗 LeetCode Link

[54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)
