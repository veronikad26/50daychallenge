# 💻 Day 5 - LeetCode Practice

## 🔹 Q1: Palindrome Linked List  
*Problem:* Given the `head` of a singly linked list, return `true` if it is a palindrome or `false` otherwise.  
*Leetcode Link:* [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list)

### ✅ Approach:
- Use two pointers (`slow` and `fast`) to find the middle of the list.
- If the list length is odd, move `slow` one more step ahead.
- Reverse the second half of the list starting from `slow`.
- Compare the first half and the reversed second half node-by-node.
- Return `true` if all values match, otherwise `false`.
- Time Complexity: **O(n)**, Space Complexity: **O(1)** (in-place reversal).

---

## 🔹 Q2: Valid Perfect Square  
*Problem:* Given a positive integer `num`, return `true` if it is a perfect square or `false` otherwise.  
*Leetcode Link:* [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square)

### ✅ Approach:
- Use **binary search** between `1` and `num`.
- In each step, compute `m = (a + b) / 2`.
- Compare `m * m` with `num` using `num / m` to avoid overflow.
- Narrow down the search range based on result.
- Return `true` if `a * a == num`, otherwise `false`.
- Time Complexity: **O(log n)**, Space Complexity: **O(1)**.
