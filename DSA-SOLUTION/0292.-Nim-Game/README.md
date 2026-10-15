# 0292. Nim Game

## 📌 Problem

**LeetCode Problem:** [Nim Game](https://leetcode.com/problems/nim-game/)

## 📝 Description

You are playing a Nim Game with your friend.

There is a heap of `n` stones. You and your friend take turns removing stones from the heap.

* Each turn, a player can remove **1, 2, or 3 stones**.
* You always play first.
* The player who removes the last stone wins.

Return `true` if you can win the game, assuming both players play optimally. Otherwise, return `false`.

## 💡 Approach

We can solve this problem using a simple mathematical observation.

* If `n` is divisible by `4`, you will lose if your opponent plays optimally.
* Otherwise, you can win by removing enough stones to leave a multiple of `4` for your opponent.

**Condition:**

```cpp
return n % 4 != 0;
```

## 💻 Solution (C++)

```cpp
class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};
```

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(1)` — The solution uses a single modulo operation.
* **Space Complexity:** `O(1)` — No extra space is required.

## 🧪 Examples

**Example 1:**

```text
Input: n = 4
Output: false
Explanation: You cannot win if both players play optimally.
```

**Example 2:**

```text
Input: n = 1
Output: true
```

**Example 3:**

```text
Input: n = 2
Output: true
```

## 🏷️ Topics

* Math
* Game Theory
* Brainteaser

## 🎯 Key Learning

The key observation is that **every multiple of 4 is a losing position** when both players play optimally.

If the number of stones is not divisible by 4, you can remove 1, 2, or 3 stones to leave a multiple of 4 for your opponent.

---

⭐ **Day by day, one problem at a time — improving my DSA skills with C++!**

