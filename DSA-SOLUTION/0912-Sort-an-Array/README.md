# 0912. Sort an Array

## 🔗 Problem Link

[ Sort an Array](https://leetcode.com/problems/sort-an-array/)

## 📝 Problem Description

Given an array of integers `nums`, sort the array in ascending order and return it.

You must solve the problem without using the built-in sorting function. Your solution should have an average time complexity of `O(n log n)`.

## 💡 Examples

**Example 1:**

```text
Input: nums = [5,2,3,1]
Output: [1,2,3,5]
```

**Explanation:** After sorting the array in ascending order, the elements become `[1,2,3,5]`.

**Example 2:**

```text
Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
```

**Explanation:** All elements are arranged in ascending order, including duplicate values.

**Example 3:**

```text
Input: nums = [1,2,3,4,5]
Output: [1,2,3,4,5]
```

**Explanation:** The array is already sorted.

## 🚀 Approach: Merge Sort

1. Divide the array into two halves using the middle index.
2. Recursively divide each half until individual elements remain.
3. Merge the two sorted halves by comparing their elements.
4. Place the smaller element into a temporary array.
5. Copy the merged elements back into the original array.
6. Continue until the entire array is sorted.

### 🔍 Key Concept

**Divide and Conquer:**

Merge Sort divides a large problem into smaller subproblems, solves them independently, and combines their results to produce the final sorted array.

## ⏱️ Complexity Analysis

| Complexity | Value |
|---|---|
| Time Complexity | O(n log n) |
| Space Complexity | O(n) |

- **Time:** O(n log n) because the array is divided into log n levels, and merging takes O(n) time per level.
- **Space:** O(n) for the temporary array used during merging.

## 🛠️ Language Used

- C++

## 📚 Topics

- Array
- Divide and Conquer
- Sorting
- Recursion
- Merge Sort

## 🔗 LeetCode

[**Solve 0912. Sort an Array on LeetCode**](https://leetcode.com/problems/sort-an-array/)
