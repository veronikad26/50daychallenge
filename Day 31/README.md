# 💻 Day 31 - LeetCode Practice ⭐

## 🔹 Q1: Maximum Depth of Binary Tree ⭐  
**Problem:** Given the root of a binary tree, return its maximum depth — the number of nodes along the longest path from the root down to the farthest leaf node.  
**Leetcode Link:** [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree)

### ✅ Approach:
- Use **DFS (Depth-First Search)** recursively:
  - For each node, return `1 + max(depth of left, depth of right)`.
- Alternatively, use **BFS** with a queue to compute depth level by level.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (due to recursion or queue).

---

## 🔹 Q2: Flipping an Image ⭐  
**Problem:** Given an `n x n` binary matrix, flip the image horizontally, then invert it.  
**Leetcode Link:** [Flipping an Image](https://leetcode.com/problems/flipping-an-image)

### ✅ Approach:
- **Flip horizontally**: Reverse each row in the matrix.
- **Invert**: Change all 0s to 1s and 1s to 0s.
- Combine both steps in a single pass:
  - Swap and invert while traversing half of each row.
- **Time Complexity:** O(n × m), where `n` is number of rows and `m` is number of columns.  
- **Space Complexity:** O(1), done in-place.
