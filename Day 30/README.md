# 💻 Day 30 - LeetCode Practice ⭐

## 🔹 Q1: Diameter of Binary Tree ⭐  
**Problem:** Given the root of a binary tree, return the length of the diameter — the longest path between any two nodes in the tree.  
**Leetcode Link:** [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree)

### ✅ Approach:
- Use **DFS** to calculate the height of left and right subtrees at each node.
- At each node, update the diameter as `leftHeight + rightHeight`.
- The answer is the maximum diameter found during traversal.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (recursion stack).

---

## 🔹 Q2: Find the Duplicate Number ⭐  
**Problem:** Given an array of integers containing `n + 1` integers where each integer is between `1` and `n`, return the duplicate number.  
**Leetcode Link:** [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number)

### ✅ Approach:
- Use **Floyd’s Tortoise and Hare** (Cycle Detection):
  - Treat the array as a linked list where `nums[i]` points to the next node.
  - Detect the cycle and find the entry point which is the duplicate.
- Alternative: Binary search on value range or use a set.
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1) (using Floyd's algorithm)
