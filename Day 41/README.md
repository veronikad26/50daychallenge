# 💻 Day 41 - LeetCode Practice ⭐

## 🔹 Q1: Delete Node in a BST ⭐  
**Problem:** Given the root of a Binary Search Tree (BST) and a key, delete the node with the given key and return the updated root.  
**Leetcode Link:** [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst)

### ✅ Approach:
- Traverse the tree to find the node with the given key.
- Three cases:
  1. **Node has no child** – simply delete it.
  2. **Node has one child** – replace node with its child.
  3. **Node has two children** – find the in-order successor (smallest in the right subtree), replace node's value, then delete the successor.
- **Time Complexity:** O(h), where `h` is the height of the tree.  
- **Space Complexity:** O(h), recursion stack.

---

## 🔹 Q2: Longest Common Prefix ⭐  
**Problem:** Given an array of strings, find the longest common prefix among them.  
**Leetcode Link:** [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix)

### ✅ Approach:
- Sort the array lexicographically.
- The common prefix between the first and last strings will be the common prefix for the entire array.
- Compare characters of the first and last string until mismatch.
- **Time Complexity:** O(n * m), where `n` is the number of strings and `m` is the length of the shortest string.  
- **Space Complexity:** O(1)
