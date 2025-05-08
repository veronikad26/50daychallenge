# 💻 Day 8 - LeetCode Practice

## 🔹 Q1: Odd Even Linked List  
*Problem:* Given a singly linked list, group all odd nodes together followed by all even nodes. The odd and even nodes should maintain their relative order.  
*Leetcode Link:* [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list)

### ✅ Approach:
- Use two pointers: one for odd nodes and one for even nodes.
- Traverse the list, assigning odd nodes to the odd list and even nodes to the even list.
- At the end of the traversal, connect the last odd node to the first even node.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.

---

## 🔹 Q2: Excel Sheet Column Number  
*Problem:* Given a column title as it appears in an Excel sheet, return its corresponding column number. For example, "A" -> 1, "AB" -> 28.  
*Leetcode Link:* [Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number)

### ✅ Approach:
- Treat the string as a number in base 26.
- For each character in the column title, calculate its numerical value and update the result using `acc = acc * 26 + (charValue)`.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.
