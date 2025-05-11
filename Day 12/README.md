# 💻 Day 12 - LeetCode Practice

## 🔹 Q1: Insert Greatest Common Divisor in Linked List  
**Problem:** Given the head of a linked list, for every pair of adjacent nodes, insert a new node containing the greatest common divisor (GCD) of the two node values.  
**Leetcode Link:** [Insert Greatest Common Divisor in Linked List](https://leetcode.com/problems/insert-greatest-common-divisor-in-linked-list)

### ✅ Approach:
- Traverse through the linked list, and for each pair of adjacent nodes, compute the GCD of their values.
- Create a new node with the GCD value and insert it between the current node and the next node.
- Continue the process for the entire list.
- **Time Complexity:** O(n), where `n` is the number of nodes in the list, **Space Complexity:** O(1) (excluding the space used for new nodes).

---

## 🔹 Q2: Count Odd Numbers in an Interval Range  
**Problem:** Given a range `[low, high]`, count the number of odd numbers in that range (inclusive).  
**Leetcode Link:** [Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range)

### ✅ Approach:
- The number of odd numbers from `1` to `x` can be computed as `(x + 1) / 2`.
- Use this formula to compute the number of odd numbers between `low` and `high` by subtracting the number of odd numbers from `1` to `low-1` from the number of odd numbers from `1` to `high`.
- **Time Complexity:** O(1), **Space Complexity:** O(1).
