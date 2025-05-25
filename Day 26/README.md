# 💻 Day 26 - LeetCode Practice ⭐

## 🔹 Q1: Binary Tree Inorder Traversal ⭐  
**Problem:** Given the root of a binary tree, return the inorder traversal of its nodes' values.  
**Leetcode Link:** [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal)

### ✅ Approach:
- Use **recursion** or an **explicit stack** to simulate inorder traversal:  
  - Traverse left subtree  
  - Visit current node  
  - Traverse right subtree  
- Iterative version uses a stack to simulate the call stack.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(n) (due to recursion stack or explicit stack), where `n` is the number of nodes.

---

## 🔹 Q2: Find First and Last Position of Element in Sorted Array ⭐  
**Problem:** Given an array of integers sorted in non-decreasing order, find the starting and ending position of a given target value.  
**Leetcode Link:** [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array)

### ✅ Approach:
- Use **binary search** twice:
  - First to find the **leftmost (first)** occurrence.
  - Second to find the **rightmost (last)** occurrence.
- If target is not found, return `[-1, -1]`.
- **Time Complexity:** O(log n) ⭐  
- **Space Complexity:** O(1)
