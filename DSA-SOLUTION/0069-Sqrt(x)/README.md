# 0069-Sqrt(x)

**LeetCode Problem:** [Sqrt(x)](https://leetcode.com/problems/sqrtx/)

**Difficulty:** Easy
**Language:** C++
**Topic:** Binary Search

## 📌 Problem Statement

Given a non-negative integer `x`, return the square root of `x` rounded down to the nearest integer.

You must not use any built-in exponent function or operator.

## 💡 Approach: Binary Search

We use Binary Search to find the integer square root efficiently.

### Steps:

1. If `x < 2`, return `x`.
2. Initialize `start = 0` and `end = x`.
3. Calculate the middle value using `(start + end) / 2`.
4. If `mid == x / mid`, return `mid`.
5. If `mid < x / mid`, store `mid` in `ans` and search the right half.
6. Otherwise, search the left half.
7. Return `ans` when the loop ends.

## 💻 C++ Solution

```cpp
class Solution {
public:
    int mySqrt(int x) {

        if(x < 2) {
            return x;
        }

        int start = 0, end = x, ans;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(mid == x / mid) {
                return mid;
            }
            else if(mid < x / mid) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};
```

## 🧪 Examples

**Example 1:**

Input:

```text
x = 4
```

Output:

```text
2
```

**Example 2:**

Input:

```text
x = 8
```

Output:

```text
2
```

Explanation: The square root of 8 is approximately 2.828, so the answer is 2.

## ⏱️ Complexity Analysis

| Complexity       | Value    |
| ---------------- | -------- |
| Time Complexity  | O(log x) |
| Space Complexity | O(1)     |

## 📚 Key Concepts Learned

* Binary Search
* Integer Square Root
* Search Space Optimization
* Avoiding Integer Overflow
* Time and Space Complexity

## 🚀 Learning Outcome

Learned how Binary Search can be used to calculate the integer square root without using built-in mathematical functions.

---

**#LeetCode #DSA #BinarySearch #CPP #CodingPractice**

