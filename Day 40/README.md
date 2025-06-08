# 💻 Day 40 - LeetCode Practice ⭐

## 🔹 Q1: Lowest Common Ancestor of a Binary Search Tree ⭐  
**Problem:** Given the root of a Binary Search Tree (BST) and two nodes `p` and `q`, find their lowest common ancestor (LCA).  
**Leetcode Link:** [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree)

### ✅ Approach:
- Use the BST property:
  - If both `p` and `q` values are smaller than the current node’s value, search left subtree.
  - If both are greater, search right subtree.
  - Otherwise, current node is the LCA.
- Implemented recursively or iteratively.
- **Time Complexity:** O(h), where `h` is the height of the tree.  
- **Space Complexity:** O(h) recursion stack, O(1) iterative.

---

## 🔹 Q2: Rotate String ⭐  
**Problem:** Given two strings `s` and `goal`, return `true` if `goal` is a rotation of `s`, otherwise `false`.  
**Leetcode Link:** [Rotate String](https://leetcode.com/problems/rotate-string)

### ✅ Approach:
- Check if lengths are equal.
- Concatenate `s` with itself: `s + s`.
- Check if `goal` is a substring of the concatenated string.
- **Time Complexity:** O(n), where `n` is the length of `s`.  
- **Space Complexity:** O(n).
