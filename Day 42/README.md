# 💻 Day 42 - LeetCode Practice ⭐

## 🔹 Q1: Validate Binary Search Tree ⭐  
**Problem:** Given the root of a binary tree, determine if it is a valid Binary Search Tree (BST).  
**Leetcode Link:** [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree)

### ✅ Approach:
- Use **in-order traversal** to ensure values are in strictly increasing order.
- Alternatively, use **recursion with min/max bounds**:
  - Left subtree must have values `< root.val`
  - Right subtree must have values `> root.val`
- Return `false` if any node violates the BST property.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (recursion stack).

---

## 🔹 Q2: Reverse Words in a String ⭐  
**Problem:** Given an input string `s`, reverse the order of the words.  
**Leetcode Link:** [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string)

### ✅ Approach:
- Use built-in functions to:
  - Trim extra spaces.
  - Split the string into words.
  - Reverse the word list.
  - Join them back with a single space.
- Handle multiple spaces between words and leading/trailing spaces.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(n), for storing the list of words.
