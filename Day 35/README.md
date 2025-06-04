# 💻 Day 35 - LeetCode Practice ⭐

## 🔹 Q1: Lowest Common Ancestor of a Binary Tree ⭐  
**Problem:** Given a binary tree and two nodes `p` and `q`, find their lowest common ancestor (LCA).  
**Leetcode Link:** [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree)

### ✅ Approach:
- Use **DFS recursion**:
  - If the current node is `null`, return `null`.
  - If the node matches either `p` or `q`, return that node.
  - Recursively check left and right subtrees.
- If both left and right return non-null, current node is the LCA.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree.

---

## 🔹 Q2: Number of Segments in a String ⭐  
**Problem:** Given a string `s`, return the number of segments (words) in it. A segment is defined as a contiguous sequence of non-space characters.  
**Leetcode Link:** [Number of Segments in a String](https://leetcode.com/problems/number-of-segments-in-a-string)

### ✅ Approach:
- Use built-in string functions: `split()` and count the resulting list’s length.
- Or, traverse manually:
  - Count transitions from space to non-space.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(1) (if manual count) or O(k) with `split()` where `k` is number of segments.
