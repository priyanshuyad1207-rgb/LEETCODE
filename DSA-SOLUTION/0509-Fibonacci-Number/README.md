# 0509. Fibonacci Number

## 🔗 Problem Link

[ 509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)

## 📌 Problem Description

The Fibonacci numbers form a sequence in which each number is the sum of the two preceding numbers.

The sequence starts with `0` and `1`.

**Fibonacci Formula:**

```text
F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2), where n > 1
```

Given an integer `n`, calculate and return the `n-th` Fibonacci number.

## 💡 Examples

### Example 1:

**Input:**
```text
n = 2
```

**Output:**
```text
1
```

**Explanation:**

F(2) = F(1) + F(0) = 1 + 0 = 1.

### Example 2:

**Input:**
```text
n = 3
```

**Output:**
```text
2
```

**Explanation:**

F(3) = F(2) + F(1) = 1 + 1 = 2.

### Example 3:

**Input:**
```text
n = 4
```

**Output:**
```text
3
```

**Explanation:**

F(4) = F(3) + F(2) = 2 + 1 = 3.

## 🚀 Approach: Iterative Dynamic Programming

We can solve this problem efficiently using an iterative approach with two variables.

1. Initialize two variables:
   - `a = 0`
   - `b = 1`
2. Iterate from `0` to `n - 1`.
3. Calculate the next Fibonacci number using `a + b`.
4. Update the variables to store the next two Fibonacci numbers.
5. Return the final value of `a`.

This approach avoids repeated calculations and uses constant extra space.

## ⏱️ Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time Complexity | O(n) | We iterate through the sequence n times. |
| Space Complexity | O(1) | Only two variables are used. |

## 🛠️ Language Used

- C++

## 📚 Topics

- Math
- Dynamic Programming
- Recursion
- Memoization

## 🎯 Key Learning

- Understanding the Fibonacci sequence.
- Learning recurrence relations.
- Practicing iterative programming.
- Understanding Dynamic Programming basics.
- Optimizing space complexity using two variables.

## 🔗 LeetCode

[509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)
