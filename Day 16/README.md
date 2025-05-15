# 💻 Day 16 - LeetCode Practice

## 🔹 Q1: Delete Node in a Linked List  
**Problem:** Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.  
**Leetcode Link:** [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list)

### ✅ Approach:
- Copy the value from the next node into the current node.
- Link the current node to the next of next node (`node.next = node.next.next`).
- Effectively removes the next node while keeping the current node in place.
- **Time Complexity:** O(1), **Space Complexity:** O(1).

---

## 🔹 Q2: Sum of Square Numbers  
**Problem:** Given a non-negative integer `c`, determine whether there're two integers `a` and `b` such that `a² + b² = c`.  
**Leetcode Link:** [Sum of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers)

### ✅ Approach:
- Use the two-pointer technique:
  - Start `a` at 0 and `b` at √c.
  - Check if `a² + b² == c`; if so, return `true`.
  - If the sum is less than `c`, increment `a`; if greater, decrement `b`.
- Continue until `a > b`. If no match is found, return `false`.
- **Time Complexity:** O(√c), **Space Complexity:** O(1).
