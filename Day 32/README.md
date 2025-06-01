# 💻 Day 32 - LeetCode Practice ⭐

## 🔹 Q1: Binary Tree Level Order Traversal ⭐  
**Problem:** Given the root of a binary tree, return the level order traversal of its nodes' values (i.e., from left to right, level by level).  
**Leetcode Link:** [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal)

### ✅ Approach:
- Use **Breadth-First Search (BFS)** with a queue.
- For each level:
  - Dequeue all nodes of the current level.
  - Enqueue their children.
  - Collect values in a sublist for each level.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(n), for queue and output list.

---

## 🔹 Q2: Rotate Image ⭐  
**Problem:** Given an `n x n` 2D matrix, rotate the image by 90 degrees (clockwise) in-place.  
**Leetcode Link:** [Rotate Image](https://leetcode.com/problems/rotate-image)

### ✅ Approach:
- First **transpose** the matrix: swap `matrix[i][j]` with `matrix[j][i]`.
- Then **reverse each row** to get the 90-degree rotation.
- Done in-place without using any extra space.
- **Time Complexity:** O(n²), where `n` is the number of rows/columns.  
- **Space Complexity:** O(1)
