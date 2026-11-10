# 0169 - Majority Element

**LeetCode Problem:** [Majority Element](https://leetcode.com/problems/majority-element/)

## 📝 Problem Description

Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears **more than ⌊n / 2⌋ times** in the array.

You may assume that the majority element always exists in the array.

## 💡 Examples

**Example 1:**

Input:
```cpp
nums = [3,2,3]
```

Output:
```cpp
3
```

Explanation: The element `3` appears 2 times, which is more than n/2.

**Example 2:**

Input:
```cpp
nums = [2,2,1,1,1,2,2]
```

Output:
```cpp
2
```

Explanation: The element `2` appears 4 times, which is more than n/2.

## 🚀 Approach: Boyer-Moore Voting Algorithm

The Boyer-Moore Voting Algorithm finds the majority element efficiently using two variables:

- `count` – Tracks the current vote count.
- `candidate` – Stores the potential majority element.

**Steps:**

1. Initialize `count = 0`.
2. Traverse the array.
3. If `count == 0`, select the current element as the candidate.
4. If the current element equals the candidate, increment `count`.
5. Otherwise, decrement `count`.
6. After traversing the array, the candidate is the majority element.

## 💻 Language

- **C++**

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) – The array is traversed only once.
- **Space Complexity:** O(1) – Only two extra variables are used.

## 📚 Topics Covered

- Array
- Hashing
- Boyer-Moore Voting Algorithm
- Counting
- Greedy Algorithm

## 🔗 LeetCode Link

[169. Majority Element](https://leetcode.com/problems/majority-element/)
