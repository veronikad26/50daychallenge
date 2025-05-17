# 💻 Day 18 - LeetCode Practice

## 🔹 Q1: Implement Queue using Stacks  
**Problem:** Implement a first in first out (FIFO) queue using only two stacks. Support `push`, `pop`, `peek`, and `empty` operations.  
**Leetcode Link:** [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks)

### ✅ Approach:
- Use two stacks: `inputStack` for enqueue and `outputStack` for dequeue.
- On `push(x)`: Push element onto `inputStack`.
- On `pop()` or `peek()`:
  - If `outputStack` is empty, transfer all elements from `inputStack` to `outputStack`.
  - Then pop or peek from `outputStack`.
- On `empty()`: Return true if both stacks are empty.
- **Time Complexity:**  
  - Amortized O(1) per operation,  
  - Worst-case O(n) for individual `pop` or `peek` when transferring.
- **Space Complexity:** O(n).

---

## 🔹 Q2: Contains Duplicate  
**Problem:** Given an integer array `nums`, return true if any value appears at least twice in the array, and false if every element is distinct.  
**Leetcode Link:** [Contains Duplicate](https://leetcode.com/problems/contains-duplicate)

### ✅ Approach:
- Use a hash set to store elements while traversing.
- For each number:
  - If it already exists in the set, return `true`.
  - Otherwise, add it to the set.
- If traversal completes without duplicates, return `false`.
- **Time Complexity:** O(n), **Space Complexity:** O(n).
