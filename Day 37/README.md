# 💻 Day 37 - LeetCode Practice ⭐

## 🔹 Q1: Binary Tree Zigzag Level Order Traversal ⭐  
**Problem:** Given the root of a binary tree, return the zigzag level order traversal of its nodes' values — i.e., level by level but alternating left to right and right to left.  
**Leetcode Link:** [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal)

### ✅ Approach:
- Use **Breadth-First Search (BFS)** with a queue.
- For each level:
  - Collect values in a list.
  - If the level index is odd, **reverse** the list before appending.
- Alternatively, use a **deque** to manage insertions from both ends efficiently.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(n), for queue and result storage.

---

## 🔹 Q2: Find First Palindromic String in the Array ⭐  
**Problem:** Given an array of strings, return the **first string** that is a palindrome. If none exist, return an empty string.  
**Leetcode Link:** [Find First Palindromic String in the Array](https://leetcode.com/problems/find-first-palindromic-string-in-the-array)

### ✅ Approach:
- Iterate through the array and check each word.
- A string is a palindrome if it reads the same forward and backward (`word == word[::-1]`).
- Return the first such string found.
- **Time Complexity:** O(n * k), where `n` is the number of strings and `k` is average string length.  
- **Space Complexity:** O(1)
