# 💻 Day 24 - LeetCode Practice

## 🔹 Q1: Basic Calculator  
**Problem:** Implement a basic calculator to evaluate a simple string expression containing non-negative integers, `'+'`, `'-'`, `'('`, `')'`, and empty spaces.  
**Leetcode Link:** [Basic Calculator](https://leetcode.com/problems/basic-calculator)

### ✅ Approach:
- Use a stack to keep track of signs and intermediate results.
- Iterate through the string character by character:
  - Build numbers digit by digit.
  - Handle `+` and `-` by updating the sign.
  - On `'('`, push current result and sign to the stack.
  - On `')'`, complete the current number and compute the result with the last value and sign from the stack.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(n), where `n` is the length of the input string.

---

## 🔹 Q2: Move Zeroes  
**Problem:** Move all 0's to the end of the array while maintaining the relative order of the non-zero elements.  
**Leetcode Link:** [Move Zeroes](https://leetcode.com/problems/move-zeroes)

### ✅ Approach:
- Use a pointer `lastNonZeroIndex` to track where to place the next non-zero element.
- Traverse the array:
  - When a non-zero element is found, place it at `lastNonZeroIndex` and increment the pointer.
- After moving all non-zeroes, fill the rest of the array with 0s.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(1).
