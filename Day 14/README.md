# 💻 Day 14 - LeetCode Practice

## 🔹 Q1: Partition List  
**Problem:** Given the head of a linked list and a value `x`, partition it such that all nodes less than `x` come before nodes greater than or equal to `x`. Preserve the original relative order of the nodes.  
**Leetcode Link:** [Partition List](https://leetcode.com/problems/partition-list)

### ✅ Approach:
- Create two dummy nodes to represent two separate lists: one for nodes less than `x` and one for nodes greater than or equal to `x`.
- Traverse the original list and attach nodes to the respective lists.
- Finally, connect the two lists and return the merged list starting from the first dummy’s next node.
- **Time Complexity:** O(n), where `n` is the number of nodes in the list, **Space Complexity:** O(1) (excluding the space used by new list references).

---

## 🔹 Q2: Reverse Integer  
**Problem:** Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes it to go outside the signed 32-bit integer range, return `0`.  
**Leetcode Link:** [Reverse Integer](https://leetcode.com/problems/reverse-integer)

### ✅ Approach:
- Initialize a variable `rev` as 0.
- Pop the last digit of `x` using `x % 10` (or `x % -10` for negatives) and add it to `rev * 10`.
- Check for overflow/underflow before finalizing the result using 32-bit bounds: [-2³¹, 2³¹ - 1].
- Return the reversed value or `0` if out of range.
- **Time Complexity:** O(log₁₀(n)), where `n` is the input number, **Space Complexity:** O(1).
