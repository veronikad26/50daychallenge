# 💻 Day 28 - LeetCode Practice ⭐

## 🔹 Q1: Minimum Depth of Binary Tree ⭐  
**Problem:** Given a binary tree, find its minimum depth — the number of nodes along the shortest path from the root node down to the nearest leaf node.  
**Leetcode Link:** [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree)

### ✅ Approach:
- Use **BFS** (Breadth-First Search) to traverse level by level.
- The first time a leaf node is encountered, return the current depth.
- Alternatively, a **DFS** solution can also be written recursively, but make sure to handle cases where one child is `null`.
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n) (queue in BFS)

---

## 🔹 Q2: Number of Subarrays With LCM Equal to K ⭐  
**Problem:** Given an integer array `nums` and an integer `k`, return the number of subarrays where the **LCM** of all the elements is exactly `k`.  
**Leetcode Link:** [Number of Subarrays With LCM Equal to K](https://leetcode.com/problems/number-of-subarrays-with-lcm-equal-to-k)

### ✅ Approach:
- Traverse through each subarray starting at index `i`.
- Maintain the **LCM** while iterating from `i` to the end:
  - If `lcm > k`, break early to save time.
  - If `lcm == k`, increment count.
- Use a helper function to compute LCM using the formula:  
  `lcm(a, b) = abs(a * b) / gcd(a, b)`
- **Time Complexity:** O(n²) in worst case  
- **Space Complexity:** O(1)
