# 💻 Day 25 - LeetCode Practice

## 🔹 Q1: Implement Stack using Queues  
**Problem:** Implement a last-in-first-out (LIFO) stack using only two queues.  
**Leetcode Link:** [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues)

### ✅ Approach:
- Use two queues (`q1`, `q2`) or one queue with element rotation.
- For **push**:
  - Add the new element to the back of the queue.
  - Then rotate the queue (i.e., pop all elements and push them back except the last one).
- For **pop** and **top**:
  - Directly pop or peek the front element of the queue.
- For **empty**, check if the queue is empty.
- **Time Complexity:**  
  - `push`: O(n),  
  - `pop`, `top`, `empty`: O(1)  
- **Space Complexity:** O(n)

---

## 🔹 Q2: Rotate Array  
**Problem:** Rotate an array to the right by `k` steps, where `k` is non-negative.  
**Leetcode Link:** [Rotate Array](https://leetcode.com/problems/rotate-array)

### ✅ Approach:
- Normalize `k` by doing `k = k % n`.
- Reverse the entire array.
- Reverse the first `k` elements.
- Reverse the remaining `n - k` elements.
- This performs the rotation in-place using array reversal.
- **Time Complexity:** O(n),  
- **Space Complexity:** O(1)
