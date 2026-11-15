# 0724. Find Pivot Index

## 🔗 Problem Link

[Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)

## 📌 Problem Description

Given an integer array `nums`, find the **pivot index** of the array.

The pivot index is the index where the sum of all elements strictly to its left is equal to the sum of all elements strictly to its right.

- If the pivot is at the first index, the left sum is `0`.
- If the pivot is at the last index, the right sum is `0`.
- If multiple pivot indexes exist, return the leftmost one.
- If no pivot index exists, return `-1`.

## 💡 Examples

### Example 1:

**Input:**
```text
nums = [1, 7, 3, 6, 5, 6]
```

**Output:**
```text
3
```

**Explanation:**

At index `3`, the value is `6`.

- Left Sum = 1 + 7 + 3 = 11
- Right Sum = 5 + 6 = 11

Since both sums are equal, the pivot index is `3`.

### Example 2:

**Input:**
```text
nums = [1, 2, 3]
```

**Output:**
```text
-1
```

**Explanation:**

No index has equal left and right sums.

### Example 3:

**Input:**
```text
nums = [2, 1, -1]
```

**Output:**
```text
0
```

**Explanation:**

- Left Sum = 0
- Right Sum = 1 + (-1) = 0

Both sums are equal, so the pivot index is `0`.

## 🚀 Approach: Prefix Sum

We use the **Prefix Sum technique** to efficiently find the pivot index.

1. Calculate the total sum of the array.
2. Initialize `leftSum = 0`.
3. Traverse the array from left to right.
4. Calculate the right sum by subtracting the current element and left sum from the total sum.
5. If `leftSum == rightSum`, return the current index.
6. Otherwise, add the current element to `leftSum`.
7. If no pivot index is found, return `-1`.

**Formula:**

```text
Right Sum = Total Sum - Left Sum - nums[i]
```

Pivot condition:

```text
Left Sum == Right Sum
```

## ⏱️ Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | Two linear traversals of the array (one for total sum and one for finding the pivot). |
| Space Complexity | O(1) | Only a few extra variables are used. |

## 🛠️ Language Used

- C++

## 📚 Topics

- Array
- Prefix Sum
- Running Sum

## 🎯 Key Learning

This problem demonstrates how the **Prefix Sum technique** can optimize array problems by avoiding repeated calculations.

Instead of calculating the left and right sums separately for every index, we maintain a running left sum and use the total sum to calculate the right sum efficiently.

## 🔗 LeetCode

[724. Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)
