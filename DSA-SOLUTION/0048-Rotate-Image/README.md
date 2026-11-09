
# 48. Rotate Image

**LeetCode Problem:** [Rotate Image](https://leetcode.com/problems/rotate-image/)

## Problem Description

You are given an `n x n` 2D matrix representing an image.

Rotate the image by **90 degrees clockwise**.

You must rotate the image **in-place**, which means you have to modify the original matrix without creating another matrix.

### Example 1:

**Input:**
```cpp
matrix = [[1,2,3],
          [4,5,6],
          [7,8,9]]
```

**Output:**
```cpp
[[7,4,1],
 [8,5,2],
 [9,6,3]]
```

**Explanation:**

The matrix is rotated 90 degrees clockwise.

### Example 2:

**Input:**
```cpp
matrix = [[5,1,9,11],
          [2,4,8,10],
          [13,3,6,7],
          [15,14,12,16]]
```

**Output:**
```cpp
[[15,13,2,5],
 [14,3,4,1],
 [12,6,8,9],
 [16,7,10,11]]
```

## Approach: Transpose + Reverse Each Row

We can rotate the matrix 90 degrees clockwise using two steps.

**Step 1: Transpose the Matrix**

- Traverse the upper triangular part of the matrix.
- Swap `matrix[i][j]` with `matrix[j][i]`.
- This converts rows into columns.

**Step 2: Reverse Each Row**

- Traverse every row.
- Initialize two pointers: `start = 0` and `end = n-1`.
- Swap elements from both ends until `start < end`.
- This reverses every row.

After completing both steps, the matrix is rotated 90 degrees clockwise.

## C++ Solution

```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Step 1: Transpose the matrix
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for(int i = 0; i < n; i++) {
            int start = 0, end = n-1;

            while(start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++, end--;
            }
        }
    }
};
```

## Complexity Analysis

**Time Complexity: O(N²)**

- Transposing the matrix takes O(N²) time.
- Reversing all rows takes O(N²) time.
- Overall time complexity is O(N²).

**Space Complexity: O(1)**

- The matrix is modified in-place.
- No additional matrix or data structure is used.

## Topics

- Array
- Matrix
- 2D Array
- Transpose of Matrix
- Two Pointers
- In-place Algorithm

## Key Learning

To rotate an `n x n` matrix 90 degrees clockwise:

1. First, transpose the matrix.
2. Then, reverse every row.

**Remember:** Transpose + Reverse Rows = 90° Clockwise Rotation.

## LeetCode Link

[48. Rotate Image](https://leetcode.com/problems/rotate-image/)
