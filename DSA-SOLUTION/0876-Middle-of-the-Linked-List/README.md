# 0876. Middle of the Linked List

## 🔗 Problem Link

[LeetCode - 876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)

## 📝 Problem Description

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the **second middle node**.

## 💡 Examples

### Example 1

**Input:**
```text
head = [1,2,3,4,5]
```

**Output:**
```text
[3,4,5]
```

**Explanation:**

The middle node of the linked list is `3`.

### Example 2

**Input:**
```text
head = [1,2,3,4,5,6]
```

**Output:**
```text
[4,5,6]
```

**Explanation:**

There are two middle nodes (`3` and `4`). According to the problem, we return the second middle node, which is `4`.

## 🚀 Approach

### Slow and Fast Pointer Approach (Tortoise and Hare)

We can find the middle node using two pointers:

1. Initialize two pointers, `slow` and `fast`, at the head of the linked list.
2. Move the `slow` pointer one step at a time.
3. Move the `fast` pointer two steps at a time.
4. Continue until the `fast` pointer reaches the end of the linked list.
5. At that point, the `slow` pointer will be pointing to the middle node.
6. Return `slow`.

**Why does this work?**

The fast pointer moves twice as quickly as the slow pointer. Therefore, when the fast pointer reaches the end, the slow pointer reaches the middle.

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)` – We traverse the linked list using the fast pointer.
- **Space Complexity:** `O(1)` – We use only two pointers without requiring extra memory.

Where `n` is the number of nodes in the linked list.

## 🏷️ Topics

- Linked List
- Two Pointers

## 💻 Language

C++

## 🔗 LeetCode Profile

[Visit LeetCode Problem](https://leetcode.com/problems/middle-of-the-linked-list/)
