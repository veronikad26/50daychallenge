# 💻 Day 19 - LeetCode Practice

## 🔹 Q1: Valid Parentheses  
**Problem:** Given a string containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.  
**Leetcode Link:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses)

### ✅ Approach:
- Use a stack to keep track of opening brackets.
- For every closing bracket, check if the stack is not empty and if the top element matches the corresponding opening bracket.
- If all brackets are matched and the stack is empty at the end, return `true`; otherwise, return `false`.
- **Time Complexity:** O(n), where `n` is the length of the string,  
- **Space Complexity:** O(n) for the stack.

---

## 🔹 Q2: Best Time to Buy and Sell Stock  
**Problem:** Given an array `prices` where `prices[i]` is the price of a stock on the i-th day, find the maximum profit you can achieve from one buy and one sell.  
**Leetcode Link:** [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)

### ✅ Approach:
- Initialize `minPrice` to a very large value and `maxProfit` to 0.
- Traverse the array:
  - Update `minPrice` if a lower price is found.
  - Calculate profit at each step and update `maxProfit` if the current profit is greater.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(1).
