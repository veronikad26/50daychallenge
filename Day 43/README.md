# 💻 Day 43 - LeetCode Practice ⭐

## 🔹 Q1: Kth Smallest Element in a BST ⭐  
**Problem:** Given the root of a Binary Search Tree and an integer `k`, return the `k`th smallest element in the tree.  
**Leetcode Link:** [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst)

### ✅ Approach:
- Use **in-order traversal**, which gives nodes in sorted order.
- Keep a counter while traversing; return the node when the counter reaches `k`.
- Can be implemented recursively or iteratively (with a stack).
- **Time Complexity:** O(h + k), where `h` is the height of the tree.  
- **Space Complexity:** O(h), for recursion stack or explicit stack.

---

## 🔹 Q2: Zigzag Conversion ⭐  
**Problem:** Convert a given string into a zigzag pattern on a given number of rows and then read it row by row.  
**Leetcode Link:** [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion)

### ✅ Approach:
- Create a list of strings for each row.
- Use a variable to track the current row and direction (down or up).
- Traverse the input string and place characters in the correct row accordingly.
- Concatenate all rows to form the final string.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(n), for storing row strings.
