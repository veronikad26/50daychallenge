# 💻 Day 36 - LeetCode Practice ⭐

## 🔹 Q1: Sum Root to Leaf Numbers ⭐  
**Problem:** Given the root of a binary tree containing digits from `0–9`, each root-to-leaf path represents a number. Return the total sum of all these numbers.  
**Leetcode Link:** [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers)

### ✅ Approach:
- Use **DFS** traversal:
  - At each node, build the number formed so far.
  - When a leaf is reached, add the number to the total sum.
- Pass accumulated number down the recursive calls as `current_sum * 10 + node.val`.
- **Time Complexity:** O(n), where `n` is the number of nodes.  
- **Space Complexity:** O(h), where `h` is the height of the tree (recursion stack).

---

## 🔹 Q2: Reverse Vowels of a String ⭐  
**Problem:** Given a string `s`, reverse only the vowels in the string and return it.  
**Leetcode Link:** [Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string)

### ✅ Approach:
- Use **two pointers**: one from the start and one from the end.
- Move both pointers until vowels are found, then swap them.
- Use a set for quick vowel lookup (`a, e, i, o, u` in both cases).
- **Time Complexity:** O(n), where `n` is the length of the string.  
- **Space Complexity:** O(n) (if using list conversion), or O(1) with in-place techniques.
