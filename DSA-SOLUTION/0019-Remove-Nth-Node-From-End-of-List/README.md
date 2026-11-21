# 0019. Remove Nth Node From End of List

## 🔗 Problem Link

[Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

## 📝 Problem Description

Given the head of a linked list, remove the `nth` node from the end of the list and return its head.

You must solve the problem in one pass.

## 💡 Examples

### Example 1:

**Input:**
```text
head = [1,2,3,4,5], n = 2
```

**Output:**
```text
[1,2,3,5]
```

**Explanation:**

The 2nd node from the end is `4`. After removing it, the linked list becomes `[1,2,3,5]`.

### Example 2:

**Input:**
```text
head = [1], n = 1
```

**Output:**
```text
[]
```

**Explanation:**

The only node is removed, so the list becomes empty.

### Example 3:

**Input:**
```text
head = [1,2], n = 1
```

**Output:**
```text
[1]
```

**Explanation:**

The last node `2` is removed.

## 🚀 Approach: Two Pointers (Fast & Slow)

1. Create a dummy node pointing to the head of the linked list.
2. Initialize two pointers, `fast` and `slow`, at the dummy node.
3. Move the `fast` pointer `n + 1` steps forward.
4. Move both pointers together until `fast` reaches `NULL`.
5. Now, `slow` points to the node just before the node that needs to be removed.
6. Update `slow->next = slow->next->next` to remove the target node.
7. Return `dummy->next`.

## ⏱️ Complexity Analysis

- **Time Complexity:** O(N) – We traverse the linked list only once.
- **Space Complexity:** O(1) – We use only two pointers and a dummy node.

## 🛠️ Language Used

- C++

## 📚 Topics

- Linked List
- Two Pointers
- Fast and Slow Pointers
- Dummy Node

## 🔗 LeetCode

[Solve Problem on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
