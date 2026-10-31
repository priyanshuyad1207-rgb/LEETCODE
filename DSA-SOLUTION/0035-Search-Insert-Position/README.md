#0035-Search Insert Position

**LeetCode Problem:** [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

**Difficulty:** Easy
**Language:** C++
**Topic:** Binary Search

## 📌 Problem Statement

Given a sorted array of distinct integers and a target value, return the index if the target is found.

If not, return the index where it would be inserted in order.

You must write an algorithm with **O(log n)** runtime complexity.

## 💡 Approach: Binary Search

We use Binary Search to find the target position efficiently.

### Steps:

1. Initialize `start = 0` and `end = nums.size() - 1`.
2. Initialize `index = nums.size()` as the default insertion position.
3. Calculate the middle index.
4. If `nums[mid] == target`, return `mid`.
5. If `nums[mid] < target`, search in the right half.
6. Otherwise, update `index = mid` and search in the left half.
7. Return `index` if the target is not found.

## 💻 C++ Solution

```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int index = nums.size();

        while (start <= end) {
            int mid = (start + end) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                index = mid;
                end = mid - 1;
            }
        }

        return index;
    }
};
```

## 🧪 Example

**Input:**

```text
nums = [1, 3, 5, 6]
target = 5
```

**Output:**

```text
2
```

**Explanation:** Target 5 is present at index 2.

Another Example:

**Input:**

```text
nums = [1, 3, 5, 6]
target = 2
```

**Output:**

```text
1
```

**Explanation:** Target 2 should be inserted at index 1.

## ⏱️ Complexity Analysis

| Complexity       | Value    |
| ---------------- | -------- |
| Time Complexity  | O(log n) |
| Space Complexity | O(1)     |

## 📚 Key Concepts Learned

* Binary Search
* Sorted Arrays
* Search Space Reduction
* Finding Insertion Position
* Time and Space Complexity

## 🚀 Learning Outcome

Learned how to use Binary Search not only to find an element but also to determine its correct insertion position in a sorted array.

---

**#LeetCode #DSA #BinarySearch #CPP #CodingPractice**

