# 💻 Day 21 - LeetCode Practice

## 🔹 Q1: Pascal's Triangle II  
**Problem:** Given an integer `rowIndex`, return the rowIndex-th row of Pascal's Triangle.  
**Leetcode Link:** [Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii)

### ✅ Approach:
- Initialize the row with `[1]`.
- For each row from `1` to `rowIndex`, update the row in-place from the back using the formula:
  - `row[i] = row[i] + row[i - 1]` (right to left to avoid overwriting needed values).
- This approach uses only O(k) extra space.
- **Time Complexity:** O(k²),  
- **Space Complexity:** O(k), where `k` is `rowIndex`.

---

## 🔹 Q2: Valid Parenthesis String  
**Problem:** Given a string `s` containing `'('`, `')'`, and `'*'`, return true if the string is valid.  
**Leetcode Link:** [Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string)

### ✅ Approach:
- Use two counters: `low` and `high` to represent the range of open parentheses.
- Traverse the string:
  - `'('` increases both `low` and `high`.
  - `')'` decreases both `low` and `high`.
  - `'*'` increases `high` (can act as `'('`) and decreases `low` (can act as `')'`), but `low` should not go below 0.
- If `high` ever goes below 0, return false.
- At the end, check if `low == 0` for a valid configuration.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(1).
