# 0234 - Palindrome Linked List

## Problem Link
[Palindrome Linked List - LeetCode](https://leetcode.com/problems/palindrome-linked-list/)

## Problem Description
Given the head of a singly linked list, return `true` if it is a palindrome or `false` otherwise.

A palindrome linked list is a linked list that reads the same forward and backward.

### Example 1
**Input:**
```text
head = [1,2,2,1]
```
**Output:**
```text
true
```
**Explanation:** The linked list reads the same from both directions.

### Example 2
**Input:**
```text
head = [1,2]
```
**Output:**
```text
false
```
**Explanation:** The linked list is different when read backward.

## Approach: Count, Split, and Reverse

1. First, traverse the linked list and count the total number of nodes.
2. If there is only one node, return `true`.
3. Divide the count by 2 to find the middle position.
4. Traverse the linked list to reach the middle and disconnect the first half from the second half.
5. Reverse the second half of the linked list using three pointers:
   - `fust` – stores the next node.
   - `tell` – stores the previous node.
   - `temp` – tracks the current node.
6. Take two pointers:
   - `head1` points to the first half.
   - `head2` points to the reversed second half.
7. Compare the values of both halves.
8. If any values are different, return `false`. Otherwise, return `true`.


## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Traversing the linked list takes O(n).
  - Reversing the second half takes O(n).
  - Comparing both halves takes O(n).
  - Overall time complexity is O(n).

- **Space Complexity:** `O(1)`
  - Only a few pointer variables are used.
  - No extra array or data structure is required.

## Language
C++

## Topics
- Linked List
- Two Pointers
- Fast and Slow Pointers
- Reversing a Linked List

## LeetCode
[0234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
