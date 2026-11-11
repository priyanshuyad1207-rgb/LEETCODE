# 1832. Check if the Sentence Is Pangram

🔗 **LeetCode Problem:** [Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)

## 📌 Problem Description

A pangram is a sentence that contains every letter of the English alphabet at least once.

Given a string `sentence` containing only lowercase English letters, return `true` if the sentence is a pangram, or `false` otherwise.

### Example 1:

**Input:**
```text
sentence = "thequickbrownfoxjumpsoverthelazydog"
```

**Output:**
```text
true
```

**Explanation:**

The sentence contains every letter from `a` to `z` at least once.

### Example 2:

**Input:**
```text
sentence = "leetcode"
```

**Output:**
```text
false
```

**Explanation:**

The sentence does not contain every letter of the English alphabet.

---

## 💡 Approach: Using Boolean Vector

1. Create a Boolean vector `alpha` of size 26 and initialize all values to `false`.
2. Traverse the given sentence using a `for` loop.
3. Convert each character into an index using `sentence[i] - 'a'`.
4. Mark the corresponding index as `true` in the vector.
5. Traverse the vector from index 0 to 25.
6. If any index contains `false`, return `false` because a letter is missing.
7. If all 26 positions are `true`, return `true`.

---


---

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n + 26) = O(n)
  - First loop traverses the sentence.
  - Second loop checks all 26 alphabet positions.

- **Space Complexity:** O(26) = O(1)
  - We use a Boolean vector of fixed size 26.

Where `n` is the length of the given sentence.

---

## 🧠 Key Concepts

- String
- Vector
- Boolean Array
- Character to Index Conversion
- Array Traversal

---

## 🏷️ Difficulty

🟢 Easy

## 🔗 LeetCode

[1832. Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)
