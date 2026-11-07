# 0042 - Trapping Rain Water

**LeetCode Problem:** [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)

## 📌 Problem Description

You are given an array `height` where each element represents the height of a vertical bar.

The width of each bar is 1 unit.

Your task is to calculate how much rainwater can be trapped between the bars after raining.

## 💡 Example 1

**Input:**
```cpp
height = [0,1,0,2,1,0,1,3,2,1,2,1]
```

**Output:**
```cpp
6
```

**Explanation:**

The elevation map can trap a total of **6 units of rainwater** between the bars.

## 💡 Example 2

**Input:**
```cpp
height = [4,2,0,3,2,5]
```

**Output:**
```cpp
9
```

**Explanation:**

The bars trap a total of **9 units of rainwater**.

## 🚀 Approach

### Two Pointer Approach (Optimal)

We use two pointers:

- `left` starts from the beginning.
- `right` starts from the end.
- `leftMax` stores the maximum height from the left side.
- `rightMax` stores the maximum height from the right side.

**Steps:**

1. Initialize two pointers `left` and `right`.
2. Maintain `leftMax` and `rightMax`.
3. Compare the heights at both pointers.
4. If `height[left] < height[right]`, calculate trapped water using `leftMax`.
5. Otherwise, calculate trapped water using `rightMax`.
6. Move the corresponding pointer.
7. Add the trapped water to the total answer.

**Formula:**

```cpp
Water Trapped = min(leftMax, rightMax) - height[i];
```

## ⏱️ Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | Each element is visited at most once. |
| Space Complexity | O(1) | Only a few extra variables are used. |

## 🛠️ Language Used

- C++

## 📚 Topics Covered

- Array
- Two Pointers
- Prefix Maximum
- Suffix Maximum
- Dynamic Programming
- Greedy Approach

## 🔗 LeetCode Link

[42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)

---
⭐ If you find this solution helpful, don't forget to star this repository!
