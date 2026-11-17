# 0046. Permutations

## 🔗 Problem Link

[Permutations](https://leetcode.com/problems/permutations/)

## 📝 Problem Description

Given an array of distinct integers `nums`, return all the possible permutations of the array.

A permutation is an arrangement of all elements in a different order.

You can return the answer in any order.

## 💡 Examples

**Example 1:**

```text
Input: nums = [1,2,3]

Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
```

**Example 2:**

```text
Input: nums = [0,1]

Output: [[0,1],[1,0]]
```

**Example 3:**

```text
Input: nums = [1]

Output: [[1]]
```

## ⚙️ Approach: Backtracking

We use **Backtracking** to generate all possible permutations.

1. Start with an empty temporary vector.
2. Select an element that has not been used.
3. Mark the selected element as visited.
4. Add it to the temporary vector.
5. Recursively generate the next position.
6. Once the temporary vector contains all elements, add it to the result.
7. Backtrack by removing the last element and marking it as unused.

This process continues until all possible permutations are generated.

## ⏱️ Complexity Analysis

Let `n` be the size of the input array.

- **Time Complexity:** `O(n × n!)` – There are `n!` possible permutations, and each permutation takes `O(n)` time to construct.
- **Space Complexity:** `O(n)` – Auxiliary space for recursion and the temporary permutation, excluding the output storage.

## 🛠️ Language Used

- C++

## 🏷️ Topics

- Array
- Backtracking
- Recursion

## 📌 Key Learning

- Understanding recursion and backtracking.
- Generating all possible arrangements of array elements.
- Using a visited array to avoid selecting the same element twice.
- Understanding the factorial growth of permutations.

---

⭐ If you find this solution helpful, don't forget to star the repository!

**Happy Coding! 🚀**
