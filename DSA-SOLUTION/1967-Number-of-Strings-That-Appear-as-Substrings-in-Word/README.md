# 1967. Number of Strings That Appear as Substrings in Word

**LeetCode Problem:** [Number of Strings That Appear as Substrings in Word](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/)

## Problem Description

You are given an array of strings `patterns` and a string `word`.

A string is considered a substring if it appears as a continuous sequence of characters inside another string.

Return the number of strings in `patterns` that are substrings of `word`.

### Example 1:

**Input:**
```cpp
patterns = ["a","abc","bc","d"]
word = "abc"
```

**Output:**
```cpp
3
```

**Explanation:**

- "a" is a substring of "abc".
- "abc" is a substring of "abc".
- "bc" is a substring of "abc".
- "d" is not a substring of "abc".

Therefore, the answer is `3`.

### Example 2:

**Input:**
```cpp
patterns = ["a","b","c"]
word = "aaaaabbbbb"
```

**Output:**
```cpp
2
```

**Explanation:**

- "a" is present in word.
- "b" is present in word.
- "c" is not present in word.

Therefore, the answer is `2`.

### Example 3:

**Input:**
```cpp
patterns = ["a","a","a"]
word = "ab"
```

**Output:**
```cpp
3
```

**Explanation:**

All three patterns are substrings of word.

## Approach: Brute Force

1. Initialize a variable `count = 0`.
2. Traverse each string in the `patterns` array.
3. Use the `find()` function to check whether the current pattern exists in `word`.
4. If `find()` does not return `string::npos`, increment `count`.
5. Return the final count.

## C++ Solution

```cpp
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;

        for (int i = 0; i < patterns.size(); i++) {
            if (word.find(patterns[i]) != string::npos) {
                count++;
            }
        }

        return count;
    }
};
```

## Complexity Analysis

**Time Complexity:** `O(N * M * K)`

- `N` = Number of strings in patterns.
- `M` = Length of word.
- `K` = Average length of each pattern.
- Each pattern is searched inside the word.

**Space Complexity:** `O(1)`

- No extra data structure is used.

## Topics

- String
- Array
- String Matching
- Brute Force
- STL (`find()` function)

## LeetCode Link

[1967. Number of Strings That Appear as Substrings in Word](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/)
