# 💻 Day 34 - LeetCode Practice ⭐

## 🔹 Q1: Flatten Binary Tree to Linked List ⭐  
**Problem:** Given the root of a binary tree, flatten it into a "linked list" in-place such that the tree follows the same order as a pre-order traversal.  
**Leetcode Link:** [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list)

### ✅ Approach:
- Use **reverse post-order traversal** (right → left → root).
- Maintain a `prev` pointer and update the current node's right to `prev`.
- Set left to `null`, and move `prev` to current.
- Done in-place without extra data structures.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (due to recursion).

---

## 🔹 Q2: Length of Last Word ⭐  
**Problem:** Given a string `s` consisting of words and spaces, return the length of the **last word** in the string.  
**Leetcode Link:** [Length of Last Word](https://leetcode.com/problems/length-of-last-word)

### ✅ Approach:
- Trim any trailing spaces.
- Traverse from the end until the first space or start of the string is encountered.
- Count and return the length of the last word.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(1)
