# 💻 Day 39 - LeetCode Practice ⭐

## 🔹 Q1: Insert into a Binary Search Tree ⭐  
**Problem:** Given the root of a Binary Search Tree (BST) and a value to insert, insert the value into the BST and return the root of the updated tree.  
**Leetcode Link:** [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree)

### ✅ Approach:
- Start from the root and traverse the tree.
- Use the **BST property**:
  - If `val < node.val`, move to the left child.
  - If `val > node.val`, move to the right child.
- Insert at the correct null position.
- Can be implemented recursively or iteratively.
- **Time Complexity:** O(h), where `h` is the height of the tree.  
- **Space Complexity:** O(h) for recursion, O(1) if iterative.

---

## 🔹 Q2: Remove All Adjacent Duplicates In String ⭐  
**Problem:** Given a string `s`, repeatedly remove all adjacent duplicate characters and return the final string.  
**Leetcode Link:** [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string)

### ✅ Approach:
- Use a **stack** to keep track of characters.
- If the current character is the same as the top of the stack, pop the top.
- Else, push the character onto the stack.
- Join the stack to form the resulting string.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(n), for the stack.
