# 💻 Day 10 - LeetCode Practice

## 🔹 Q1: Delete the Middle Node of a Linked List  
*Problem:* Given the head of a linked list, delete the middle node and return the modified list.  
*Leetcode Link:* [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list)

### ✅ Approach:
- Use a **dummy node** to handle edge cases and simplify deletion.
- Use **slow and fast pointers**: slow advances by one, fast by two.
- When fast reaches the end, slow will be at the node **just before the middle**.
- Delete the middle node by updating `slow->next`.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.

---

## 🔹 Q2: Bulb Switcher  
*Problem:* There are `n` bulbs that are initially off. For `n` rounds, you toggle the bulbs that are divisible by `i` in the `i-th` round. Return the number of bulbs that remain on after `n` rounds.  
*Leetcode Link:* [Bulb Switcher](https://leetcode.com/problems/bulb-switcher)

### ✅ Approach:
- A bulb ends up **on** only if it is toggled an **odd number** of times.
- Only **perfect square** positions have an odd number of divisors.
- So, count of bulbs that remain on is equal to `floor(sqrt(n))`.
- Time Complexity: **O(1)**, Space Complexity: **O(1)**.
