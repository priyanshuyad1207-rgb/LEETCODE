# 83. Remove Duplicates from Sorted List

## 🔗 Problem Link
[Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## 📝 Problem Description
Given the head of a sorted linked list, delete all duplicates such that each element appears only once.

Return the linked list sorted as well.

## 💡 Examples

### Example 1:
**Input:**
```text
head = [1,1,2]
```

**Output:**
```text
[1,2]
```

**Explanation:**
The value `1` appears twice, so we remove the duplicate node.

### Example 2:
**Input:**
```text
head = [1,1,2,3,3]
```

**Output:**
```text
[1,2,3]
```

**Explanation:**
The duplicate occurrences of `1` and `3` are removed.

## 🚀 Approach: Two Pointers (Linked List Traversal)

1. Start with the head of the linked list.
2. Traverse the list using a pointer `curr`.
3. Check whether the current node's value is equal to the next node's value.
4. If both values are equal, skip the next node by updating:
   `curr->next = curr->next->next`
5. Otherwise, move to the next node.
6. Continue until the end of the linked list.



## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) — We traverse the linked list once.
- **Space Complexity:** O(1) — We use only one extra pointer.

## 🏷️ Topics
- Linked List
- Two Pointers

## 🔗 LeetCode
[83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
