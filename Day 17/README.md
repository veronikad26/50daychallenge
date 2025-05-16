# 💻 Day 17 - LeetCode Practice

## 🔹 Q1: Min Stack  
**Problem:** Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.  
**Leetcode Link:** [Min Stack](https://leetcode.com/problems/min-stack)

### ✅ Approach:
- Use two stacks:
  - One for storing all values (`mainStack`)
  - One for tracking the minimum value at each level (`minStack`)
- On push: push to both stacks, and update `minStack` with the minimum of current value and top of `minStack`.
- On pop: pop from both stacks.
- Top and getMin return the top of their respective stacks.
- **Time Complexity:** O(1) for all operations, **Space Complexity:** O(n).

---

## 🔹 Q2: Two Sum  
**Problem:** Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.  
**Leetcode Link:** [Two Sum](https://leetcode.com/problems/two-sum)

### ✅ Approach:
- Use a hash map to store the difference (`target - current number`) while traversing.
- For each element:
  - If it exists in the map, return the stored index and current index.
  - Otherwise, store the element with its index in the map.
- **Time Complexity:** O(n), **Space Complexity:** O(n).
