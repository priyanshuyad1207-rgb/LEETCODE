# 476. Number Complement

## 📌 Problem

**LeetCode Problem:** [Number Complement](https://leetcode.com/problems/number-complement/)

## 📝 Description

Given a positive integer `num`, return its complement.

The complement of an integer is obtained by flipping all the bits in its binary representation:

* Change every `0` to `1`.
* Change every `1` to `0`.

**Note:** Ignore leading zeros in the binary representation.

## 💡 Example 1

**Input:**

```
num = 5
```

**Output:**

```
2
```

**Explanation:**

* Binary representation of `5` = `101`
* Complement = `010`
* Decimal value of `010` = `2`

## 💡 Example 2

**Input:**

```
num = 1
```

**Output:**

```
0
```

**Explanation:**

* Binary representation of `1` = `1`
* Complement = `0`
* Decimal value of `0` = `0`

## 💡 Example 3

**Input:**

```
num = 7
```

**Output:**

```
0
```

**Explanation:**

* Binary representation of `7` = `111`
* Complement = `000`
* Decimal value of `000` = `0`

## 🚀 Approach

1. Convert the integer into its binary representation.
2. Flip each bit (`0` becomes `1` and `1` becomes `0`).
3. Convert the complemented binary number back to decimal.
4. Return the result.

## ⏱️ Complexity Analysis

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1), when using bitwise operations without additional storage.

## 🛠️ Language Used

* C++

## 📚 Topics

* Bit Manipulation
* Binary Numbers
* Bitwise Operators
* Mathematics
