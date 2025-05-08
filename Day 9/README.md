# 💻 Day 9 - LeetCode Practice

## 🔹 Q1: Swapping Nodes in Linked List  
*Problem:* Given a linked list, swap the k-th node from the beginning with the k-th node from the end. Return the modified list.  
*Leetcode Link:* [Swapping Nodes in Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list)

### ✅ Approach:
- Traverse the list and use two pointers: one to find the k-th node from the beginning (`p`), and the other to find the k-th node from the end (`q`).
- Swap the values of the two nodes.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.

---

## 🔹 Q2: Nth Digit  
*Problem:* Find the nth digit in the sequence of integers 1, 2, 3, 4, 5, 6, ...  
*Leetcode Link:* [Nth Digit](https://leetcode.com/problems/nth-digit)

### ✅ Approach:
- First, determine the range of numbers the nth digit falls into.
- Calculate the target number and find the specific digit from that number.
- Time Complexity: **O(log n)**, Space Complexity: **O(1)**.
