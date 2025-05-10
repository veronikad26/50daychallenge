# 💻 Day 11 - LeetCode Practice

## 🔹 Q1: Factorial Trailing Zeroes  
*Problem:* Given an integer `n`, return the number of trailing zeroes in `n!`.  
*Leetcode Link:* [Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes)

### ✅ Approach:
- Trailing zeroes are created by factors of **10**, which is **2 × 5**.
- In a factorial, there are always more 2s than 5s, so count the number of **5s** in the prime factors.
- Use integer division to count how many times 5, 25, 125... divide `n`.
- Time Complexity: **O(log n)**, Space Complexity: **O(1)**.

---

## 🔹 Q2: Remove Nth Node From End of List  
*Problem:* Given the head of a linked list, remove the `n`th node from the end of the list and return its head.  
*Leetcode Link:* [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list)

### ✅ Approach:
- Use a **dummy node** to handle edge cases (like deleting the head).
- Use **two pointers**: advance the first pointer `n` steps ahead.
- Move both pointers until the first reaches the end. The second will be at the node before the one to delete.
- Update links to skip the target node.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.
