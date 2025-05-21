# 💻 Day 22 - LeetCode Practice

## 🔹 Q1: Minimum Remove to Make Valid Parentheses  
**Problem:** Given a string `s` of `'('`, `')'`, and lowercase English characters, remove the minimum number of invalid parentheses to make the input string valid.  
**Leetcode Link:** [Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses)

### ✅ Approach:
- First pass (left to right): remove unmatched `')'`.
- Second pass (right to left): remove unmatched `'('`.
- Use a list to store valid characters and finally join them to form the result string.
- Stack or counter can also be used to track balance.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(n), where `n` is the length of the string.

---

## 🔹 Q2: Majority Element  
**Problem:** Given an array `nums`, return the majority element — the element that appears more than ⌊n / 2⌋ times.  
**Leetcode Link:** [Majority Element](https://leetcode.com/problems/majority-element)

### ✅ Approach:
- **Boyer-Moore Voting Algorithm**:
  - Initialize `count = 0`, and track a `candidate`.
  - Traverse the array:
    - If count is 0, set current element as candidate.
    - If current element == candidate, increment count, else decrement.
  - The remaining candidate is the majority.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(1).

