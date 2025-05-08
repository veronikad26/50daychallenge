# 💻 Day 7 - LeetCode Practice

## 🔹 Q1: Rotate List  
*Problem:* Given the `head` of a linked list, rotate the list to the right by `k` places.  
*Leetcode Link:* [Rotate List](https://leetcode.com/problems/rotate-list)

### ✅ Approach:
- First, calculate the length of the linked list and connect the tail to the head to form a circular linked list.
- Use modulo operation to reduce unnecessary rotations: `k % length`.
- Move the tail pointer to the correct position so that the list is rotated by `k` positions.
- Break the cycle to obtain the new head and return it.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.

---

## 🔹 Q2: Plus One  
*Problem:* Given a non-empty array of digits representing a non-negative integer, increment the integer by one and return the new array of digits.  
*Leetcode Link:* [Plus One](https://leetcode.com/problems/plus-one)

### ✅ Approach:
- Traverse the digits array from right to left.
- If the current digit is 9, set it to 0 (carry over).
- If a digit is less than 9, increment it and return the array.
- If the carry reaches the most significant digit, insert `1` at the beginning and append `0`.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.
