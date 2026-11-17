# 0047. Permutations II

## 🔗 Problem Link

[Permutations II](https://leetcode.com/problems/permutations-ii/)

## 📝 Problem Description

Given a collection of numbers, `nums`, that might contain duplicates, return all possible unique permutations in any order.

Unlike Permutations I, this problem may contain duplicate elements. Therefore, we need to avoid generating duplicate permutations.

## 💡 Examples

**Example 1:**

```text
Input: nums = [1,1,2]

Output: [[1,1,2],[1,2,1],[2,1,1]]
```

**Example 2:**

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

## ⚙️ Approach: Backtracking

We use **Backtracking** to generate all possible permutations while avoiding duplicates.

1. First, sort the input array to bring duplicate elements together.
2. Create a `visited` array to track which elements are already selected.
3. Use recursion to build permutations.
4. Skip an element if it has already been used.
5. Avoid duplicate permutations by checking whether the current element is equal to the previous element and whether the previous element has been used in the current recursion path.
6. When the temporary permutation contains all elements, add it to the result.
7. Backtrack by removing the last selected element and marking it as unused.

This ensures that every unique permutation is generated only once.

## ⏱️ Complexity Analysis

Let `n` be the size of the input array.

- **Time Complexity:** `O(n × n!)` – In the worst case, all elements are distinct, resulting in `n!` permutations, each containing `n` elements. Sorting additionally takes `O(n log n)`.
- **Space Complexity:** `O(n)` – Auxiliary space for recursion, the visited array, and the temporary permutation, excluding the output storage.

## 🛠️ Language Used

- C++

## 🏷️ Topics

- Array
- Backtracking
- Recursion
- Sorting

## 📌 Key Learning

- Understanding backtracking and recursion.
- Handling duplicate elements in permutations.
- Using sorting to group duplicate elements.
- Using a visited array to track selected elements.
- Generating unique permutations without repetition.

---

⭐ If you find this solution helpful, don't forget to star the repository!

**Happy Coding! 🚀**
