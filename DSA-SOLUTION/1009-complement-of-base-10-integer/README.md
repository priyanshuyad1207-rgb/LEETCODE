# 009. Complement of Base 10 Integer

## 📌 Problem

**LeetCode Problem:** [Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer/)


## 📝 Description

Given an integer `n`, return its base-10 complement.

The complement of an integer is obtained by flipping all the bits in its binary representation:

* Change every `0` to `1`.
* Change every `1` to `0`.

**Note:** Ignore leading zeros in the binary representation.

## 💡 Example 1

**Input:**

```text
n = 5
```

**Output:**

```text
2
```

**Explanation:**

* Binary representation of `5` = `101`
* Complement = `010`
* Decimal value of `010` = `2`

## 💡 Example 2

**Input:**

```text
n = 7
```

**Output:**

```text
0
```

**Explanation:**

* Binary representation of `7` = `111`
* Complement = `000`
* Decimal value of `000` = `0`

## 💡 Example 3

**Input:**

```text
n = 10
```

**Output:**

```text
5
```

**Explanation:**

* Binary representation of `10` = `1010`
* Complement = `0101`
* Decimal value of `0101` = `5`

## 🚀 Approach

1. Convert the integer into its binary representation.
2. Flip each bit (`0` becomes `1` and `1` becomes `0`).
3. Convert the complemented binary number back to decimal.
4. Return the result.

## ⏱️ Complexity Analysis

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1), excluding any additional storage used to represent the binary number.

## 🛠️ Language Used

* C++

## 📚 Topics

* Bit Manipulation
* Binary Numbers
* Bitwise Operators
* Mathematics

## 🔗 LeetCode

[Solve the Problem](https://leetcode.com/problems/complement-of-base-10-integer/)
