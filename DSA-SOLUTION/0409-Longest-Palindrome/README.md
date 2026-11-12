
# 409. Longest Palindrome

## 🔗 Problem Link
[LeetCode - 409. Longest Palindrome](https://leetcode.com/problems/longest-palindrome/)

## 📝 Problem Description

Given a string `s` which consists of lowercase and/or uppercase English letters, return the length of the **longest palindrome** that can be built with those letters.

Letters are case-sensitive, meaning `"Aa"` is not considered a palindrome.

A palindrome is a string that reads the same forward and backward.

## 💡 Examples

### Example 1:
**Input:**
```text
s = "abccccdd"
```

**Output:**
```text
7
```

**Explanation:**

One possible longest palindrome is `"dccaccd"`, whose length is 7.

### Example 2:
**Input:**
```text
s = "a"
```

**Output:**
```text
1
```

**Explanation:**

The longest palindrome is `"a"`.

## 🚀 Approach: Frequency Counting

1. Create a frequency array of size 128 to store the count of each ASCII character.
2. Traverse the string and increase the frequency of each character.
3. For every character, add the largest even number of occurrences to the palindrome.
4. If any character has an odd frequency, we can place one character in the middle.
5. Return the final palindrome length.

## 💻 Language
C++

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)` – We traverse the string and frequency array.
- **Space Complexity:** `O(1)` – We use a fixed-size frequency array of 128 characters.

## 📚 Topics
- String
- Greedy
- Hash Table
- Frequency Counting

## 🔑 Key Concept

A palindrome can contain pairs of characters on both sides and at most one character in the middle.

**Remember:** We can use all even frequencies and one additional character from an odd frequency.
