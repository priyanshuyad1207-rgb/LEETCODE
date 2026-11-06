# 875. Koko Eating Bananas

## 📌 Problem

**LeetCode Problem:** [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)

## 📝 Description

Koko loves eating bananas. There are `n` piles of bananas, and the `i-th` pile contains `piles[i]` bananas.

Koko can decide her eating speed `k` (bananas per hour).

- Each hour, she chooses one pile and eats `k` bananas.
- If the pile has fewer than `k` bananas, she eats all of them.
- She cannot eat from another pile in the same hour.

Given an integer `h`, return the minimum eating speed `k` such that Koko can finish all bananas within `h` hours.

## 💡 Example 1

**Input:**
```text
piles = [3, 6, 7, 11]
h = 8
```

**Output:**
```text
4
```

**Explanation:**

At a speed of 4 bananas per hour:

- Pile 1: 1 hour
- Pile 2: 2 hours
- Pile 3: 2 hours
- Pile 4: 3 hours

Total time = 8 hours.

Therefore, the minimum eating speed is `4`.

## 💡 Example 2

**Input:**
```text
piles = [30, 11, 23, 4, 20]
h = 5
```

**Output:**
```text
30
```

**Explanation:**

Koko must eat at a speed of 30 bananas per hour to finish all piles within 5 hours.

## 💡 Example 3

**Input:**
```text
piles = [30, 11, 23, 4, 20]
h = 6
```

**Output:**
```text
23
```

**Explanation:**

At a speed of 23 bananas per hour, Koko can finish all piles within 6 hours.

## 🚀 Approach

**Binary Search on Answer**

Instead of checking every possible eating speed, we use Binary Search to find the minimum valid speed.

1. Initialize `start = 1` because the minimum eating speed is 1.
2. Set `end` to the maximum number of bananas in any pile.
3. Calculate the middle speed:
   `mid = start + (end - start) / 2`
4. Calculate the total hours required to eat all piles at speed `mid`.
5. Use ceiling division `(pile + mid - 1) / mid` to calculate the hours needed for each pile.
6. If `totalTime > h`, increase the eating speed using `start = mid + 1`.
7. Otherwise, store `mid` as the answer and search for a smaller speed using `end = mid - 1`.
8. Return the minimum valid eating speed.

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n × log(max(piles)))`
  - Binary Search takes `O(log(max(piles)))`.
  - Each iteration checks all `n` banana piles.

- **Space Complexity:** `O(1)`
  - Only a constant amount of extra space is used.

## 🛠️ Language Used

- C++

## 📚 Topics

- Binary Search
- Arrays
- Binary Search on Answer
- Mathematics
- Ceiling Division

## 🔗 LeetCode

[Solve the Problem](https://leetcode.com/problems/koko-eating-bananas/)
