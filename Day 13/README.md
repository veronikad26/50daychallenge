# 💻 Day 13 - LeetCode Practice

## 🔹 Q1: Remove Duplicates from Sorted List II  
**Problem:** Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.  
**Leetcode Link:** [Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii)

### ✅ Approach:
- Use a dummy node at the beginning to handle edge cases (like duplicates at the start).
- Traverse through the list while checking if the current node has duplicates.
- If duplicates are found, skip all nodes with that value.
- If the node is unique, link it to the result list.
- **Time Complexity:** O(n), where `n` is the number of nodes in the list, **Space Complexity:** O(1).

---

## 🔹 Q2: Sign of the Product of an Array  
**Problem:** Given an integer array `nums`, return the sign of the product of all elements.  
**Leetcode Link:** [Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array)

### ✅ Approach:
- Initialize a `sign` variable as 1.
- Traverse the array:
  - If an element is `0`, return `0` immediately.
  - If the element is negative, flip the sign (`sign *= -1`).
- After the loop, return the final `sign`.
- **Time Complexity:** O(n), **Space Complexity:** O(1).
