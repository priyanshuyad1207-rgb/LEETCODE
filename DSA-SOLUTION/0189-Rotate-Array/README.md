# 🔄 189. Rotate Array

## 🔗 Problem Link
[LeetCode - Rotate Array](https://leetcode.com/problems/rotate-array/)

## 📝 Problem Description

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

**Example 1:**

```text
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
```

**Explanation:**

Rotate the array to the right by 3 steps:

- Step 1: `[7,1,2,3,4,5,6]`
- Step 2: `[6,7,1,2,3,4,5]`
- Step 3: `[5,6,7,1,2,3,4]`

**Example 2:**

```text
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
```

## 💡 Approach

The goal is to move the last `k` elements to the beginning of the array.

**Important Points:**

- Use `k % nums.size()` to handle cases where `k` is greater than the array size.
- Reverse the entire array.
- Reverse the first `k` elements.
- Reverse the remaining elements.

This approach rotates the array without using an extra array.

## 💻 Language Used

- C++

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)` – Each element is reversed a constant number of times.
- **Space Complexity:** `O(1)` – The rotation is performed in-place.

## 📚 Topics

- Array
- Two Pointers
- Math
- In-place Operations
- STL (Reverse)

## 🎯 Learning Outcome

- Understanding array rotation.
- Learning the reverse technique.
- Understanding in-place array manipulation.
- Practicing the Two Pointers concept.

## 🔗 LeetCode Profile

[Visit LeetCode](https://leetcode.com/problems/rotate-array/)
