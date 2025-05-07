# 💻 Questions for Day-2!

---

## ✅ Q1: Middle of the Linked List

**Problem Statement:**  
Given the head of a singly linked list, return the middle node of the linked list.  
If there are two middle nodes, return the second middle node.  
🔗 [LeetCode Link](https://leetcode.com/problems/middle-of-the-linked-list?envType=problem-list-v2&envId=24jyj4ri)

### 🧠 Approach:

1. **Understand the requirement:**
   - If the list has an odd number of nodes → return the exact middle.
   - If the list has an even number of nodes → return the second middle node.

2. **Use the slow and fast pointer technique:**
   - Initialize two pointers, `slow` and `fast`, both at the head of the list.
   - Move `slow` one step at a time, and `fast` two steps at a time.
   - When `fast` reaches the end, `slow` will be at the middle.

3. **Why this works:**
   - For every two steps `fast` takes, `slow` takes one, so `slow` lands exactly in the middle by the time `fast` finishes.

### 🧮 Time & Space Complexity:
- **Time:** O(n) — Traverse the list once.
- **Space:** O(1) — Constant extra space.

---

## ✅ Q2: Add Digits

**Problem Statement:**  
Given an integer `num`, repeatedly add all its digits until the result has only one digit. Return that final result.  
🔗 [LeetCode Link](https://leetcode.com/problems/add-digits?envType=problem-list-v2&envId=24jyj4ri)

### 🧠 Approach:

1. **Understand the task:**
   - Keep adding the digits of the number until you're left with a single-digit result.

2. **Example:**
   - `num = 38 → 3 + 8 = 11 → 1 + 1 = 2`, so return `2`.

3. **Brute-force method:**
   - Use a loop to sum digits repeatedly until the number is a single digit.

4. **Optimized approach (using Digital Root):**
   - For base 10, the result can be directly found using the formula:  
     If `num == 0` → return `0`, else return `1 + (num - 1) % 9`.

5. **Why it works:**
   - It’s a well-known mathematical trick using modulo 9 properties.

### 🧮 Time & Space Complexity:
- **Time:** O(1) — Constant time using formula.
- **Space:** O(1)
