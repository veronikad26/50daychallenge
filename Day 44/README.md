# 💻 Day 44 - LeetCode Practice ⭐

## 🔹 Q1: Convert Sorted List to Binary Search Tree ⭐  
**Problem:** Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height-balanced BST.  
**Leetcode Link:** [Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree)

### ✅ Approach:
- Use the **slow and fast pointer** technique to find the middle of the list — this becomes the root.
- Recursively apply the same logic to the left and right halves of the list for left and right subtrees.
- Ensures balanced height.
- **Time Complexity:** O(n log n), where `n` is the number of nodes (due to repeated splitting and traversal).  
- **Space Complexity:** O(log n) recursion stack.

---

## 🔹 Q2: Maximum Number of Vowels in a Substring of Given Length ⭐  
**Problem:** Given a string `s` and an integer `k`, return the maximum number of vowels in any substring of length `k`.  
**Leetcode Link:** [Maximum Number of Vowels in a Substring of Given Length](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length)

### ✅ Approach:
- Use a **sliding window** of size `k` to scan the string.
- Maintain a count of vowels within the window.
- Slide the window one character at a time and update the vowel count accordingly.
- Track and return the maximum count found.
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(1)
