# 💻 Day 29 - LeetCode Practice ⭐

## 🔹 Q1: Sum of Left Leaves ⭐  
**Problem:** Given the root of a binary tree, return the sum of all left leaves.  
**Leetcode Link:** [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves)

### ✅ Approach:
- Use **DFS** to traverse the tree.
- At each node, check if the left child exists and is a leaf:
  - If so, add its value to the sum.
- Recur for left and right subtrees.
- Can also be done iteratively using a stack or queue.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (recursion stack or stack/queue space).

---

## 🔹 Q2: Kth Largest Element in an Array ⭐  
**Problem:** Given an integer array `nums` and an integer `k`, return the `k`th largest element in the array.  
**Leetcode Link:** [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array)

### ✅ Approach:
- Use a **min-heap** of size `k`:
  - Iterate through the array, maintaining the `k` largest elements.
  - At the end, the root of the heap is the `k`th largest.
- Alternative: Use **Quickselect** for an average O(n) solution.
- **Time Complexity:** O(n log k) with heap  
- **Space Complexity:** O(k)
