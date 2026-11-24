# 0001 - Two Sum

## Problem Link
[**1. Two Sum**](https://leetcode.com/problems/two-sum/)

## Problem Description

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Examples

### Example 1:
**Input:**
```text
nums = [2,7,11,15], target = 9
```

**Output:**
```text
[0,1]
```

**Explanation:**
Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

### Example 2:
**Input:**
```text
nums = [3,2,4], target = 6
```

**Output:**
```text
[1,2]
```

**Explanation:**
Because `nums[1] + nums[2] == 6`, we return `[1, 2]`.

### Example 3:
**Input:**
```text
nums = [3,3], target = 6
```

**Output:**
```text
[0,1]
```

**Explanation:**
Both elements are 3, and their sum is 6.

## Approach

### Hash Map Approach

1. Create an unordered map to store numbers and their indices.
2. Traverse the array using a loop.
3. Calculate the required number:
   `complement = target - nums[i]`
4. Check whether the complement already exists in the map.
5. If it exists, return the indices of both numbers.
6. Otherwise, store the current number and its index in the map.

## Complexity Analysis

- **Time Complexity:** O(n)
  - We traverse the array once.
  - Hash map lookup and insertion take O(1) average time.

- **Space Complexity:** O(n)
  - We use an unordered map to store array elements and their indices.

## Language Used
- C++

## Topics
- Array
- Hash Table

## LeetCode Link
[**Solve Two Sum on LeetCode**](https://leetcode.com/problems/two-sum/)
