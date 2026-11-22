# 0061. Rotate List

## 🔗 Problem Link

[Rotate List](https://leetcode.com/problems/rotate-list/)

## 📝 Problem Description

Given the head of a linked list, rotate the list to the right by `k` places.

Each rotation moves the last node of the linked list to the beginning.

## 💡 Examples

### Example 1:

**Input:**
```text
head = [1,2,3,4,5], k = 2
```

**Output:**
```text
[4,5,1,2,3]
```

**Explanation:**

- First rotation: `[5,1,2,3,4]`
- Second rotation: `[4,5,1,2,3]`

### Example 2:

**Input:**
```text
head = [0,1,2], k = 4
```

**Output:**
```text
[2,0,1]
```

**Explanation:**

After rotating the list 4 times to the right, the resulting list is `[2,0,1]`.

## 🚀 Approach

1. Find the length of the linked list.
2. Connect the last node to the head to make the linked list circular.
3. Calculate the effective rotations using `k % length`.
4. Find the new tail node.
5. Set the next node of the new tail to `nullptr`.
6. Update the head to the new starting node.

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(N)` – We traverse the linked list to calculate its length and find the new position.
- **Space Complexity:** `O(1)` – We use only a constant amount of extra space.

## 🛠️ Language Used

- C++

## 📚 Topics

- Linked List
- Two Pointers
- Circular Linked List

## 🔗 LeetCode

[61. Rotate List](https://leetcode.com/problems/rotate-list/)
