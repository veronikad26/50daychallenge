# 💻 Day 6 - LeetCode Practice

## 🔹 Q1: Remove Linked List Elements  
*Problem:* Remove all elements from a linked list of integers that have value equal to `val`.  
*Leetcode Link:* [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements)

### ✅ Approach:
- Use a dummy node pointing to head to simplify edge cases.
- Iterate through the list using a `prev` pointer.
- Skip nodes that match the target value and adjust links accordingly.
- Ensures the last node is disconnected if it matches the target.
- Time Complexity: **O(n)**, Space Complexity: **O(1)**.

---

## 🔹 Q2: Happy Number  
*Problem:* Determine if a number is a "happy number" — eventually reaching `1` when replaced by the sum of the squares of its digits repeatedly.  
*Leetcode Link:* [Happy Number](https://leetcode.com/problems/happy-number)

### ✅ Approach:
- Use Floyd’s Cycle Detection (slow & fast pointers).
- Calculate sum of squares of digits for slow and fast values.
- If a cycle is detected (slow == fast), check if it's a happy number (`1`).
- Time Complexity: **O(log n)**, Space Complexity: **O(1)** (ignoring recursion depth or math lib).
