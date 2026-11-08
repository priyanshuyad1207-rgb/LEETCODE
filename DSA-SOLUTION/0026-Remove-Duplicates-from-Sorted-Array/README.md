# 0026 - Remove Duplicates from Sorted Array

**LeetCode Problem:** [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

## 📌 Problem Description

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates **in-place** such that each unique element appears only once.

The relative order of the elements must be kept the same.

Return the number of unique elements in the array.

### Example 1:

**Input:**
```cpp
nums = [1,1,2]
```

**Output:**
```cpp
2, nums = [1,2,_]
```

**Explanation:**

There are two unique elements: `1` and `2`.

### Example 2:

**Input:**
```cpp
nums = [0,0,1,1,1,2,2,3,3,4]
```

**Output:**
```cpp
5, nums = [0,1,2,3,4,_,_,_,_,_]
```

**Explanation:**

There are five unique elements: `0, 1, 2, 3, 4`.

## 💡 Approach: Two Pointers

1. Initialize a pointer `i = 0`.
2. Traverse the array using another pointer `j` starting from index `1`.
3. Compare `nums[j]` with `nums[i]`.
4. If both elements are different, increment `i` and update `nums[i] = nums[j]`.
5. Continue until the entire array is traversed.
6. Return `i + 1` as the number of unique elements.

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) – We traverse the array only once.
- **Space Complexity:** O(1) – No extra space is used.

## 🛠️ Language Used

- C++

## 📚 Topics Covered

- Array
- Two Pointers
- In-place Operations

## 🔗 LeetCode Link

[26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
