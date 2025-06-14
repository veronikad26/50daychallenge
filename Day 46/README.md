# 💻 Day 46 - LeetCode Practice ⭐

## 🔹 Q1: Find Center of Star Graph ⭐  
**Problem:** A star graph is a graph where one central node is connected to all other nodes. Given the edges of a star graph, return the center node.  
**Leetcode Link:** [Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph)

### ✅ Approach:
- In a star graph, the center appears in every edge.
- Compare the first two edges; the common node is the center.
- Example: if edges are `[[a, b], [a, c]]`, then `a` is the center.
- **Time Complexity:** O(1)  
- **Space Complexity:** O(1)

---

## 🔹 Q2: Prime Number of Set Bits in Binary Representation ⭐  
**Problem:** Given a range `[left, right]`, count how many numbers have a prime number of set bits in their binary representation.  
**Leetcode Link:** [Prime Number of Set Bits in Binary Representation](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation)

### ✅ Approach:
- For each number in the range, count the set bits using `bin(i).count('1')`.
- Precompute a set of prime numbers up to the max possible set bits (e.g. 0–20).
- Count how many numbers have a prime count of set bits.
- **Time Complexity:** O(n * log m), where `n = right - left + 1` and `m` is the number.  
- **Space Complexity:** O(1)
