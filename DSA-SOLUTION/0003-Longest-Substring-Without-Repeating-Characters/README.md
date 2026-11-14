# 0003. Longest Substring Without Repeating Characters

## 🔗 Problem Link

[ Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

## 📝 Problem Description

Given a string `s`, find the length of the longest substring without repeating characters.

A substring is a contiguous sequence of characters within a string.

Return the maximum length of a substring that contains no duplicate characters.

## 💡 Examples

**Example 1:**

Input:
```text
s = "abcabcbb"
```

Output:
```text
3
```

Explanation:

The answer is `"abc"`, with a length of 3.

**Example 2:**

Input:
```text
s = "bbbbb"
```

Output:
```text
1
```

Explanation:

The answer is `"b"`, with a length of 1.

**Example 3:**

Input:
```text
s = "pwwkew"
```

Output:
```text
3
```

Explanation:

The answer is `"wke"`, with a length of 3.

Notice that `"pwke"` is a subsequence, not a substring.

## 🚀 Approach

### Sliding Window Technique

The Sliding Window technique is commonly used to solve this problem efficiently.

1. Maintain two pointers to represent the current window.
2. Expand the window by moving the right pointer.
3. Track the characters currently present in the window.
4. If a duplicate character is found, move the left pointer to maintain uniqueness.
5. Update the maximum length whenever a valid window is found.
6. Return the maximum length.

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) — Each character is processed at most a constant number of times.
- **Space Complexity:** O(min(n, k)) — Extra space is used to track unique characters, where `k` is the character set size.

## 📚 Topics

- String
- Hash Table
- Sliding Window

## 🔑 Key Learning

This problem helps understand the Sliding Window technique, which is widely used to solve substring and subarray problems efficiently.

## 🔗 LeetCode

[0003. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
