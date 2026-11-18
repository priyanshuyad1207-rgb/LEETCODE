# 1823. Find the Winner of the Circular Game

## 🔗 Problem Link

[Find the Winner of the Circular Game](https://leetcode.com/problems/find-the-winner-of-the-circular-game/)

## 📝 Problem Description

There are `n` friends sitting in a circle, numbered from `1` to `n`.

Starting from friend `1`, they count from `1` to `k`. The friend who receives the count `k` is eliminated.

The counting continues from the next friend in the circle until only one friend remains.

Return the number of the last remaining friend.

## 💡 Examples

### Example 1:

**Input:**
```text
n = 5, k = 2
```

**Output:**
```text
3
```

**Explanation:**

The friends are eliminated in this order:

- Friend 2 is eliminated.
- Friend 4 is eliminated.
- Friend 1 is eliminated.
- Friend 5 is eliminated.

Friend 3 is the last remaining friend.

### Example 2:

**Input:**
```text
n = 6, k = 5
```

**Output:**
```text
1
```

**Explanation:**

The friends are eliminated in the following order:

- Friend 5 is eliminated.
- Friend 4 is eliminated.
- Friend 6 is eliminated.
- Friend 2 is eliminated.
- Friend 3 is eliminated.

Friend 1 wins.

## 🚀 Approach

**Josephus Problem (Circular Elimination)**

- Friends are arranged in a circle.
- Every `k-th` friend is eliminated.
- After elimination, counting continues from the next friend.
- The process repeats until only one friend remains.
- Return the position of the last remaining friend.

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) — Each friend is processed once using the iterative Josephus recurrence.
- **Space Complexity:** O(1) — Only a constant amount of extra space is used.

## 🛠️ Language Used

- C++

## 📚 Topics

- Math
- Recursion
- Queue
- Simulation
- Josephus Problem

## 🔗 LeetCode Profile

[Find the Winner of the Circular Game - LeetCode](https://leetcode.com/problems/find-the-winner-of-the-circular-game/)
