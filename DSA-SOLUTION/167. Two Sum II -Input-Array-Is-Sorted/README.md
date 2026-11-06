# 167. Two Sum II - Input Array Is Sorted

## 📌 Problem

**LeetCode Problem:** [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

## 📝 Description

Given a **1-indexed array of integers** `numbers` that is already sorted in non-decreasing order, find two numbers that add up to a specific target.

Return the indices of the two numbers such that:

- `numbers[index1] + numbers[index2] == target`
- `1 <= index1 < index2 <= numbers.length`

You must use constant extra space.

## 💡 Example 1

**Input:**
```text
numbers = [2, 7, 11, 15]
target = 9
```

**Output:**
```text
[1, 2]
```

**Explanation:**

The sum of 2 and 7 is 9.

Therefore, the indices are `[1, 2]`.

## 💡 Example 2

**Input:**
```text
numbers = [2, 3, 4]
target = 6
```

**Output:**
```text
[1, 3]
```

**Explanation:**

The sum of 2 and 4 is 6.

Therefore, the indices are `[1, 3]`.

## 💡 Example 3

**Input:**
```text
numbers = [-1, 0]
target = -1
```

**Output:**
```text
[1, 2]
```

**Explanation:**

The sum of -1 and 0 is -1.

Therefore, the indices are `[1, 2]`.

## 🚀 Approach

**Two Pointer Approach**

Since the array is already sorted, we can use two pointers to find the required pair efficiently.

1. Initialize `start = 0` to point to the first element.
2. Initialize `end = numbers.size() - 1` to point to the last element.
3. Calculate the sum of both elements:
   `sum = numbers[start] + numbers[end]`
4. If `sum == target`, return their 1-based indices.
5. If `sum < target`, increase `start` to get a larger sum.
6. If `sum > target`, decrease `end` to get a smaller sum.
7. Repeat until the required pair is found.

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each pointer moves through the array at most once.

- **Space Complexity:** `O(1)`
  - Only two pointers and a few extra variables are used.

## 🛠️ Language Used

- C++

## 📚 Topics

- Arrays
- Two Pointers
- Binary Search
- Searching

## 🔗 LeetCode

[Solve the Problem](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
