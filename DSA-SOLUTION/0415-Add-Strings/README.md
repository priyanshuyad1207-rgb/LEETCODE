# 2785. Sort Vowels in a String

## 🔗 Problem Link -[Sort Vowels in a String](https://leetcode.com/problems/sort-vowels-in-a-string/)

## 📝 Problem Description

Given a **0-indexed string** `s`, rearrange the string so that:

- All consonants remain in their original positions.
- All vowels are sorted in nondecreasing order of their ASCII values.

Return the resulting string.

**Note:** Vowels are `'a', 'e', 'i', 'o', 'u'` and their uppercase versions.

## 💡 Examples

### Example 1:

**Input:**
```text
s = "lEetcOde"
```

**Output:**
```text
"lEOtcede"
```

**Explanation:**

The vowels are `E, e, O, e`.

After sorting in ascending ASCII order:

`E, O, e, e`

The consonants remain in their original positions.

### Example 2:

**Input:**
```text
s = "lYmpH"
```

**Output:**
```text
"lYmpH"
```

**Explanation:**

There are no vowels, so the string remains unchanged.

## 🚀 Approach: Sorting

1. Create a string to store all vowels.
2. Traverse the given string and extract all vowels.
3. Sort the extracted vowels in ascending ASCII order.
4. Traverse the original string again.
5. Whenever a vowel is found, replace it with the next sorted vowel.
6. Return the modified string.

## 💻 Language

C++

## ⏱️ Complexity Analysis

Let `n` be the length of the string and `k` be the number of vowels.

- **Time Complexity:** `O(n + k log k)` – Extracting and replacing vowels takes O(n), and sorting takes O(k log k).
- **Space Complexity:** `O(k)` – Extra space is used to store the vowels.

## 📚 Topics

- String
- Sorting
- Two Pointers
- ASCII Values

## 🔑 Key Concept

Sort only the vowels while keeping all consonants at their original positions.
