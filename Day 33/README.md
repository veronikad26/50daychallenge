# 💻 Day 33 - LeetCode Practice ⭐

## 🔹 Q1: Binary Tree Right Side View ⭐  
**Problem:** Given the root of a binary tree, return the values of the nodes you can see ordered from top to bottom when looking from the right side.  
**Leetcode Link:** [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view)

### ✅ Approach:
- Use **Level Order Traversal (BFS)**.
- At each level, the **last node** is the one visible from the right side.
- Alternatively, use **DFS** with depth tracking — prioritize right child before left.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(n), for queue or recursion stack.

---

## 🔹 Q2: Lexicographically Smallest Palindrome ⭐  
**Problem:** Given a string `s`, convert it to the lexicographically smallest palindrome by changing **at most one character**.  
**Leetcode Link:** [Lexicographically Smallest Palindrome](https://leetcode.com/problems/lexicographically-smallest-palindrome)

### ✅ Approach:
- Use two pointers to compare characters from both ends.
- When mismatch is found, replace the lexicographically **larger character** with the smaller one.
- Only one replacement allowed — make the change where it yields the smallest possible string.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(n), if you convert to list for modification (O(1) if in-place).
