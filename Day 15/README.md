# 💻 Day 15 - LeetCode Practice

## 🔹 Q1: Add Two Numbers  
**Problem:** You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.  
**Leetcode Link:** [Add Two Numbers](https://leetcode.com/problems/add-two-numbers)

### ✅ Approach:
- Initialize a dummy node and a carry variable.
- Traverse both linked lists simultaneously:
  - Add the values of the current nodes along with the carry.
  - Update the carry and create a new node with the sum's unit digit.
- After the loop, check if a carry remains and append a final node if needed.
- **Time Complexity:** O(max(m, n)), where `m` and `n` are the lengths of the two lists, **Space Complexity:** O(max(m, n)).

---

## 🔹 Q2: Excel Sheet Column Title  
**Problem:** Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet (e.g., 1 -> "A", 28 -> "AB").  
**Leetcode Link:** [Excel Sheet Column Title](https://leetcode.com/problems/excel-sheet-column-title)

### ✅ Approach:
- Treat the problem like converting a number to a base-26 representation.
- Subtract 1 from `columnNumber` to make it 0-based, then:
  - Find the remainder (`% 26`), convert it to a character (`chr(65 + remainder)`), and prepend it to the result.
  - Divide the number by 26 and continue until it becomes 0.
- **Time Complexity:** O(log₍₂₆₎ n), **Space Complexity:** O(1) (ignoring the output string).
