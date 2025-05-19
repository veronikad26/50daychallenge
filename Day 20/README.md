# 💻 Day 20 - LeetCode Practice

## 🔹 Q1: Evaluate Reverse Polish Notation  
**Problem:** Evaluate the value of an arithmetic expression in Reverse Polish Notation (postfix notation).  
**Leetcode Link:** [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation)

### ✅ Approach:
- Use a stack to process tokens.
- For each token:
  - If it's a number, push it onto the stack.
  - If it's an operator (`+`, `-`, `*`, `/`), pop the top two elements, apply the operator, and push the result back.
- After processing all tokens, the result will be at the top of the stack.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(n), where `n` is the number of tokens.

---

## 🔹 Q2: Find Greatest Common Divisor of Array  
**Problem:** Given an integer array `nums`, return the greatest common divisor (GCD) of the smallest and largest numbers in the array.  
**Leetcode Link:** [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array)

### ✅ Approach:
- Find the minimum and maximum elements in the array.
- Use the Euclidean algorithm to compute the GCD of those two numbers.
- Return the result.
- **Time Complexity:** O(log(min, max)),  
- **Space Complexity:** O(1).
