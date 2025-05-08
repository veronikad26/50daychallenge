# 💻 Day 4 - LeetCode Practice

## 🔹 Q1: Linked List Cycle  
*Problem:* Given the `head` of a linked list, determine if the linked list contains a cycle. A cycle occurs when a node’s `next` pointer points to a previously visited node.  
*Leetcode Link:* [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle)

### ✅ Approach:
- Use **Floyd’s Cycle Detection Algorithm** (Tortoise and Hare technique).
- Initialize two pointers:  
  - `slow` moves one step at a time.  
  - `fast` moves two steps at a time.
- If there is a cycle, `slow` and `fast` will eventually meet.
- If `fast` or `fast->next` becomes `nullptr`, then there is **no cycle** in the list.
- This algorithm works in **O(n)** time and **O(1)** space.

---

## 🔹 Q2: Palindrome Number  
*Problem:* Determine whether a given integer is a palindrome. An integer is a palindrome when it reads the same backward as forward (e.g., 121, 1331).  
*Leetcode Link:* [Palindrome Number](https://leetcode.com/problems/palindrome-number)

### ✅ Approach:
- Immediately return `false` for negative numbers since `-121` ≠ `121-`.
- Store the original number in a variable.
- Use a loop to **reverse the number** by:
  - Extracting the last digit (`x % 10`),
  - Appending it to a new reversed number (`rev = rev * 10 + last`),
  - Removing the last digit from `x` (`x /= 10`).
- After the loop, compare the reversed number with the original.
- If both are equal, the number is a palindrome.

