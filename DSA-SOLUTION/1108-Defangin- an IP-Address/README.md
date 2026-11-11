# 1108. Defanging an IP Address

🔗 **LeetCode Problem:** [Defanging an IP Address](https://leetcode.com/problems/defanging-an-ip-address/)

## 📌 Problem Description

Given a valid IP address, replace every period (`.`) with `[.]`.

Return the defanged version of the given IP address.

### Example 1:

**Input:**
```text
address = "1.1.1.1"
```

**Output:**
```text
"1[.]1[.]1[.]1"
```

**Explanation:**

Every `.` in the IP address is replaced with `[.]`.

### Example 2:

**Input:**
```text
address = "255.100.50.0"
```

**Output:**
```text
"255[.]100[.]50[.]0"
```

**Explanation:**

All periods are replaced with `[.]`.

---

## 💡 Approach: Using String Traversal

1. Find the length of the given IP address using `address.size()`.
2. Create an empty string `ans` to store the result.
3. Initialize `index = 0`.
4. Traverse the IP address using a `while` loop.
5. If the current character is `.`:
   - Append `[.]` to the answer.
6. Otherwise:
   - Append the current character to the answer.
7. Increment the index.
8. Return the final answer.

---



---

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) — We traverse the IP address once.
- **Space Complexity:** O(n) — We create a new string to store the modified IP address.

Where `n` is the length of the input string.

---

## 🧠 Key Concepts

- String
- String Traversal
- While Loop
- Conditional Statements
- Character Manipulation

---

## 🏷️ Difficulty

🟢 Easy

## 🔗 LeetCode

[1108. Defanging an IP Address](https://leetcode.com/problems/defanging-an-ip-address/)
