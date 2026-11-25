# 0082. Remove Duplicates from Sorted List II

## 🔗 Problem Link
[Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)

## 📝 Problem Description

Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

Return the linked list sorted as well.

## 💡 Examples

**Example 1:**

**Input:**
```text
head = [1,2,3,3,4,4,5]
```

**Output:**
```text
[1,2,5]
```

**Explanation:**
- `3` appears more than once, so all occurrences of `3` are removed.
- `4` appears more than once, so all occurrences of `4` are removed.
- Only distinct values `1`, `2`, and `5` remain.

**Example 2:**

**Input:**
```text
head = [1,1,1,2,3]
```

**Output:**
```text
[2,3]
```

**Explanation:**
All occurrences of `1` are removed because it appears multiple times.

## 🚀 Approach: Dummy Node + Two Pointers

1. Create a dummy node and connect it to the original head.
2. Use a pointer `temp` to traverse the linked list.
3. Check whether the next two nodes have the same value.
4. If they are equal, store that duplicate value.
5. Skip all nodes containing that duplicate value.
6. If the next two nodes are different, move `temp` forward.
7. Return `dummy->next` as the updated linked list.


## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) – Each node is visited at most a constant number of times.
- **Space Complexity:** O(1) – Only a few extra pointers and variables are used.

## 🧠 Key Concepts

- Singly Linked List
- Dummy Node
- Two Pointers
- Pointer Manipulation
- Linked List Traversal

## 🎯 Learning Outcome

Learned how to use a dummy node and pointer manipulation to remove all duplicate occurrences from a sorted linked list while keeping only distinct elements.

