# 💻 Questions for Day-1!

---

## ✅ Q1: Reverse Linked List

**Problem Statement:**  
Given the head of a singly linked list, reverse the list, and return the reversed list.  
🔗 [LeetCode Link](https://leetcode.com/problems/reverse-linked-list?envType=problem-list-v2&envId=24jyj4ri)

### 🧠 Approach:

1. **Understand the structure:**  
   Each node contains a `val` and a `next` pointer to the next node in the list.

2. **Goal:**  
   Reverse the direction of all `next` pointers in the list.

3. **Use an iterative approach with three pointers:**
   - `prev` → initially `None` (the new tail of the list).
   - `current` → starts at `head`.
   - `next_temp` → temporarily stores `current.next`.

4. **Iterate through the list:**
   - Save `current.next` in `next_temp`.
   - Reverse the pointer: `current.next = prev`.
   - Move `prev` and `current` forward.

5. **Return `prev` as the new head of the reversed list.**

### 🧮 Time & Space Complexity:
- **Time:** O(n) — Visit each node once.
- **Space:** O(1) — No extra memory used.


## ✅ Q2: Missing Number

**Problem Statement:**  
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.  
🔗 [LeetCode Link](https://leetcode.com/problems/missing-number?envType=problem-list-v2&envId=24jyj4ri)

### 🧠 Approach:

1. **Understand the input:**
   - The array `nums` contains `n` distinct integers.
   - The integers are in the range from `0` to `n`.
   - Exactly one number in that range is missing.

2. **Mathematical Trick:**
   - The sum of the first `n` natural numbers is given by the formula:  
     \[
     \text{expected\_sum} = \frac{n \cdot (n + 1)}{2}
     \]
   - Calculate the actual sum of the given array.
   - Subtract actual sum from expected sum to get the missing number.

3. **Why this works:**
   - Because exactly one number is missing, the difference between the total and actual sum will point directly to it.

4. **Alternative Approaches (optional):**
   - Use a HashSet to track seen numbers.
   - Use XOR between indices and values (bit manipulation).

### 🧮 Time & Space Complexity:
- **Time:** O(n) — One pass through the array.
- **Space:** O(1) — Constant extra space used.

