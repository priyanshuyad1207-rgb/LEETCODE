# 0012. Integer to Roman

## 🔗 Problem Link

[Integer to Roman](https://leetcode.com/problems/integer-to-roman/)

## 📝 Problem Description

Given an integer, convert it into a Roman numeral.

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|:---:|---:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Roman numerals are usually written from largest to smallest, from left to right. However, subtraction is used in special cases:

- I can be placed before V (5) and X (10) to make 4 and 9.
- X can be placed before L (50) and C (100) to make 40 and 90.
- C can be placed before D (500) and M (1000) to make 400 and 900.

Return the Roman numeral representation of the given integer.

## 💡 Examples

**Example 1:**

Input:
```text
num = 3749
```

Output:
```text
"MMMDCCXLIX"
```

Explanation:
```text
3000 = MMM
700  = DCC
40   = XL
9    = IX
```

Therefore, the answer is `MMMDCCXLIX`.

**Example 2:**

Input:
```text
num = 58
```

Output:
```text
"LVIII"
```

Explanation:
```text
50 = L
5  = V
3  = III
```

**Example 3:**

Input:
```text
num = 1994
```

Output:
```text
"MCMXCIV"
```

Explanation:
```text
1000 = M
900  = CM
90   = XC
4    = IV
```

## 🚀 Approach: Greedy Algorithm

1. Create two arrays: one containing Roman numeral values and another containing their corresponding symbols.
2. Store values in descending order, including special subtraction cases such as 900, 400, 90, 40, 9, and 4.
3. Traverse the values array from left to right.
4. While the given number is greater than or equal to the current value:
   - Append the corresponding Roman symbol to the result.
   - Subtract that value from the given number.
5. Continue until the number becomes zero.
6. Return the final Roman numeral string.



## ⏱️ Complexity Analysis

- **Time Complexity:** O(1) — The number of Roman numeral values is fixed, and the input is limited to 3999.
- **Space Complexity:** O(1) — The arrays have a fixed size, and the result string has a bounded maximum length.

## 📚 Topics

- String
- Greedy Algorithm
- Hash Table
- Math

## 🔑 Key Learning

The Greedy Algorithm helps convert integers into Roman numerals by always selecting the largest possible Roman numeral value first.

## 🔗 LeetCode

[0012. Integer to Roman](https://leetcode.com/problems/integer-to-roman/)
