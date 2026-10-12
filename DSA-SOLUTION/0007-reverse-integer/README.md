# 0007. Reverse Integer

## Problem
Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range, return `0`.

## Example

**Input:** `x = 123`  
**Output:** `321`

**Input:** `x = -123`  
**Output:** `-321`

**Input:** `x = 120`  
**Output:** `21`

## Approach
- Extract the last digit using `% 10`.
- Remove the last digit using `/ 10`.
- Build the reversed number digit by digit.
- Check for 32-bit integer overflow.
- Return the reversed integer.

## Complexity Analysis
- **Time Complexity:** O(log |x|)
- **Space Complexity:** O(1)

## Language
C++
