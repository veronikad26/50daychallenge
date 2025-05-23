# 💻 Day 23 - LeetCode Practice

## 🔹 Q1: Longest Valid Parentheses  
**Problem:** Given a string containing just `'('` and `')'`, find the length of the longest valid (well-formed) parentheses substring.  
**Leetcode Link:** [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses)

### ✅ Approach:
- **Stack-based approach**:
  - Use a stack to store indices.
  - Initialize with `-1` to help with base length calculation.
  - For every `'('`, push the index.
  - For every `')'`, pop the stack. If the stack becomes empty, push the current index. Otherwise, calculate the length using the difference between current index and top of the stack.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(n), where `n` is the length of the string.

---

## 🔹 Q2: Search Insert Position  
**Problem:** Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if inserted in order.  
**Leetcode Link:** [Search Insert Position](https://leetcode.com/problems/search-insert-position)

### ✅ Approach:
- **Binary Search**:
  - Use binary search to find the correct index.
  - If `target` is found, return its index.
  - Otherwise, return the left pointer which indicates the insert position.
- **Time Complexity:** O(log n),  
- **Space Complexity:** O(1).
