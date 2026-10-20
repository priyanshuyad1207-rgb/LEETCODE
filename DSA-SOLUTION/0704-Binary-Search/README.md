# 0704. Binary Search

## 📌 Problem

**LeetCode Problem:** [Binary Search](https://leetcode.com/problems/binary-search/)

**Difficulty:** Easy

**Topics:** Array, Binary Search

## 📝 Description

Given an array of integers `nums` sorted in ascending order and an integer `target`, write a function to search for `target` in `nums`.

If `target` exists, return its index. Otherwise, return `-1`.

You must write an algorithm with **O(log n)** runtime complexity.

## 💡 Approach: Binary Search

Binary Search works by repeatedly dividing the search range into two halves.

### Steps

1. Initialize two pointers: `left = 0` and `right = nums.size() - 1`.
2. Calculate the middle index using `mid = left + (right - left) / 2`.
3. If `nums[mid] == target`, return `mid`.
4. If `nums[mid] < target`, search the right half by updating `left = mid + 1`.
5. If `nums[mid] > target`, search the left half by updating `right = mid - 1`.
6. If the target is not found, return `-1`.

## 💻 C++ Solution

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};
```

## 🧪 Examples

### Example 1

**Input:**

```text
nums = [-1,0,3,5,9,12], target = 9
```

**Output:**

```text
4
```

**Explanation:** The target `9` is present at index `4`.

### Example 2

**Input:**

```text
nums = [-1,0,3,5,9,12], target = 2
```

**Output:**

```text
-1
```

**Explanation:** The target `2` does not exist in the array.

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(log n)` — The search space is halved in every iteration.
* **Space Complexity:** `O(1)` — Only a constant amount of extra space is used.

## 📚 Key Concepts Learned

* Binary Search algorithm
* Two-pointer boundaries: `left` and `right`
* Efficient searching in sorted arrays
* Time complexity optimization

## 🚀 Conclusion

Binary Search is an efficient searching algorithm for sorted arrays. It reduces the search space by half in each iteration, making it significantly faster than Linear Search for large arrays.
