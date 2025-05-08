# 💻 Day 3 - LeetCode Practice

## 🔹 Q1: Merge Two Sorted Lists  
*Problem:* Merge two sorted linked lists and return it as a new sorted list.  
*Leetcode Link:* [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists?envType=problem-list-v2&envId=24jyj4ri)

### ✅ Approach:
- Recursively compare list1 and list2.
- Swap to always ensure list1 has the smaller value.
- Set list1->next to result of merging the rest.

---

## 🔹 Q2: Perfect Number  
*Problem:* A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.  
*Leetcode Link:* [Perfect Number](https://leetcode.com/problems/perfect-number?envType=problem-list-v2&envId=24jyj4ri)

### ✅ Approach:
- Iterate from 2 to sqrt(num).
- For every divisor i, add both i and num/i to the sum.
- Return true if total sum equals num.