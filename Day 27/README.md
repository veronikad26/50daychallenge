# 💻 Day 27 - LeetCode Practice ⭐

## 🔹 Q1: Maximum Subarray ⭐  
**Problem:** Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.  
**Leetcode Link:** [Maximum Subarray](https://leetcode.com/problems/maximum-subarray)

### ✅ Approach:
- Use **Kadane’s Algorithm**:
  - Initialize two variables: `max_sum` and `current_sum`.
  - Traverse the array:
    - Update `current_sum` as the maximum of the current element or `current_sum + element`.
    - Update `max_sum` accordingly.
- Handles negative numbers gracefully.
- **Time Complexity:** O(n) ⭐  
- **Space Complexity:** O(1)

---

## 🔹 Q2: Path Sum ⭐  
**Problem:** Given the root of a binary tree and an integer `targetSum`, return `true` if the tree has a root-to-leaf path such that the sum of the path equals `targetSum`.  
**Leetcode Link:** [Path Sum](https://leetcode.com/problems/path-sum)

### ✅ Approach:
- Use **DFS (Depth-First Search)** recursively:
  - At each node, subtract the node’s value from the target sum.
  - If a leaf is reached and the remaining target is equal to the leaf's value, return `true`.
- Continue checking left and right subtrees.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (due to recursion stack).
