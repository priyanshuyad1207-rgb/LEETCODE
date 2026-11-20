# 0206. Reverse Linked List

## 🔗 Problem Link

[LeetCode - 206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

## 📝 Problem Description

Given the head of a singly linked list, reverse the linked list and return the new head.

The direction of all links between nodes must be reversed.

## 💡 Examples

### Example 1

**Input:**
```text
head = [1,2,3,4,5]
```

**Output:**
```text
[5,4,3,2,1]
```

**Explanation:**

The linked list is reversed, so the last node becomes the first node.

### Example 2

**Input:**
```text
head = [1,2]
```

**Output:**
```text
[2,1]
```

**Explanation:**

The two nodes exchange their positions by reversing their links.

### Example 3

**Input:**
```text
head = []
```

**Output:**
```text
[]
```

**Explanation:**

An empty linked list remains empty.

## 🚀 Approach

### Iterative Approach (Three Pointers)

We can reverse a linked list using three pointers:

1. `prev` – Stores the previous node.
2. `curr` – Points to the current node.
3. `nextNode` – Temporarily stores the next node.

**Steps:**

1. Initialize `prev = NULL` and `curr = head`.
2. Traverse the linked list using a while loop.
3. Store the next node in `nextNode`.
4. Reverse the current node's link by setting `curr->next = prev`.
5. Move `prev` to `curr`.
6. Move `curr` to `nextNode`.
7. When the loop ends, `prev` becomes the new head of the reversed linked list.

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)` – We traverse the linked list only once.
- **Space Complexity:** `O(1)` – We use only three pointers without extra data structures.

Where `n` is the number of nodes in the linked list.

## 🏷️ Topics

- Linked List
- Recursion
- Two Pointers
- Pointer Manipulation

## 💻 Language

C++

## 🔗 LeetCode Profile

[Visit LeetCode Problem](https://leetcode.com/problems/reverse-linked-list/)
