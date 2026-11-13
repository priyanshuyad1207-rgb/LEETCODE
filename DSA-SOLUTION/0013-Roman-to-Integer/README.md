# 13. Roman to Integer

## 🔗 Problem Link

[LeetCode - 13. Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

## 📝 Problem Description

Given a string `s` containing a Roman numeral, convert it into an integer.

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|---|---:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Roman numerals are usually written from largest to smallest, from left to right.

However, in some cases, a smaller value appears before a larger value, which means subtraction is performed.

**Examples:**
- IV = 4
- IX = 9
- XL = 40
- XC = 90
- CD = 400
- CM = 900

## 💡 Examples

### Example 1:

**Input:**
```text
s = "III"
```

**Output:**
```text
3
```

**Explanation:**

III = 1 + 1 + 1 = 3.

### Example 2:

**Input:**
```text
s = "LVIII"
```

**Output:**
```text
58
```

**Explanation:**

L = 50, V = 5, III = 3.

50 + 5 + 3 = 58.

### Example 3:

**Input:**
```text
s = "MCMXCIV"
```

**Output:**
```text
1994
```

**Explanation:**

M = 1000, CM = 900, XC = 90, IV = 4.

1000 + 900 + 90 + 4 = 1994.

## 🚀 Approach: Hash Map / Simulation

1. Create a mapping between Roman symbols and their integer values.
2. Traverse the string from left to right.
3. Get the integer value of the current Roman symbol.
4. Compare it with the next symbol:
   - If the current value is smaller than the next value, subtract it.
   - Otherwise, add it to the result.
5. Return the final integer.

## 💻 Language

C++

## ⏱️ Complexity Analysis

Let `n` be the length of the Roman numeral string.

- **Time Complexity:** `O(n)` – We traverse the string once.
- **Space Complexity:** `O(1)` – The Roman numeral mapping contains a fixed number of symbols.

## 📚 Topics

- String
- Hash Table
- Math
- Simulation

## 🔑 Key Concept

If a smaller Roman numeral appears before a larger Roman numeral, subtract its value; otherwise, add its value.
