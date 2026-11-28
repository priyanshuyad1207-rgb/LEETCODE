
# 🔗 21. Merge Two Sorted Lists

## 📌 Problem
**[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)**

## 📝 Problem Description

You are given the heads of two sorted linked lists, `list1` and `list2`.

Merge the two lists into one sorted linked list. The new list should be created by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

### Example 1:

**Input:**
```text
list1 = [1,2,4]
list2 = [1,3,4]
```

**Output:**
```text
[1,1,2,3,4,4]
```

**Explanation:**

Both linked lists are sorted. We merge their nodes in ascending order to create one sorted linked list.

### Example 2:

**Input:**
```text
list1 = []
list2 = []
```

**Output:**
```text
[]
```

### Example 3:

**Input:**
```text
list1 = []
list2 = [0]
```

**Output:**
```text
[0]
```

## 💡 Approach

**Approach: Two Pointers (Iterative)**

1. Create a dummy node to simplify the merging process.
2. Use a pointer `current` to track the last node of the merged list.
3. Compare the values of `list1` and `list2`.
4. Attach the smaller node to `current->next`.
5. Move the pointer of the list from which the node was selected.
6. Move `current` forward.
7. When one list becomes empty, attach the remaining nodes of the other list.
8. Return `dummy.next` as the head of the merged list.

## 💻 Language
- C++

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n + m)
  - We visit each node of both linked lists at most once.
- **Space Complexity:** O(1)
  - We merge the existing nodes without creating a new linked list.

Where:
- `n` = Number of nodes in the first linked list.
- `m` = Number of nodes in the second linked list.

## 🏷️ Topics

- Linked List
- Recursion
- Two Pointers
- Sorting

## 🔗 LeetCode Link

[LeetCode 21 – Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
