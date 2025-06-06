# 💻 Day 38 - LeetCode Practice ⭐

## 🔹 Q1: Search in a Binary Search Tree ⭐  
**Problem:** Given the root of a Binary Search Tree (BST) and a value, return the subtree rooted with the node that has that value. If such a node doesn't exist, return `null`.  
**Leetcode Link:** [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree)

### ✅ Approach:
- Use the **properties of BST**:
  - If `val < root.val`, search in the left subtree.
  - If `val > root.val`, search in the right subtree.
  - If `val == root.val`, return the current node.
- Can be implemented **recursively** or **iteratively**.
- **Time Complexity:** O(h), where `h` is the height of the tree.  
- **Space Complexity:** O(h) for recursion, O(1) if iterative.

---

## 🔹 Q2: Valid Palindrome ⭐  
**Problem:** Given a string `s`, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.  
**Leetcode Link:** [Valid Palindrome](https://leetcode.com/problems/valid-palindrome)

### ✅ Approach:
- Use **two pointers**, one from the start and one from the end.
- Skip non-alphanumeric characters and compare lowercase values.
- Continue until pointers meet.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(1)
