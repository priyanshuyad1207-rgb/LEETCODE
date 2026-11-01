# 0852-Peak Index in a Mountain Array

**LeetCode Problem:** [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

**Difficulty:** Medium
**Topic:** Array, Binary Search

## 📌 Problem Statement

You are given an integer mountain array `arr`.

An array is a mountain array if:

* `arr.length >= 3`
* There exists an index `i` such that:

  * `arr[0] < arr[1] < ... < arr[i]`
  * `arr[i] > arr[i+1] > ... > arr[n-1]`

Find the index of the peak element.

## 💡 Approach: Binary Search

1. Initialize `start = 0` and `end = n - 1`.
2. Calculate the middle index.
3. If `arr[mid] < arr[mid+1]`, the peak lies on the right side.
4. Otherwise, the peak lies on the left side or at `mid`.
5. Continue until `start == end`.
6. Return `start`.

## 💻 C++ Solution

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0, end = arr.size() - 1;

        while (start < end) {

            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return start;
    }
};
```

## ⏱️ Complexity Analysis

* **Time Complexity:** O(log N) – Binary Search reduces the search space by half in every iteration.
* **Space Complexity:** O(1) – No extra space is used.

## 🎯 Key Learning

* Understanding Binary Search.
* Finding peak elements in an array.
* Reducing time complexity from O(N) to O(log N).

**Pattern:** Binary Search on Mountain Array.

