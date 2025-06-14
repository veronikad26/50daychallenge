# 💻 Day 45 - LeetCode Practice ⭐

## 🔹 Q1: Find the Town Judge ⭐  
**Problem:** In a town of `n` people labeled from 1 to `n`, find the town judge if they exist. The town judge trusts nobody, but everybody else trusts the judge.  
**Leetcode Link:** [Find the Town Judge](https://leetcode.com/problems/find-the-town-judge)

### ✅ Approach:
- Use an array to track trust score for each person.
- For every pair `(a, b)` in `trust`, decrease `a`'s score (trusts someone) and increase `b`'s score (is trusted).
- The judge will have a score of `n - 1` (trusted by everyone except themselves and trusts no one).
- **Time Complexity:** O(t + n), where `t` is the number of trust pairs.  
- **Space Complexity:** O(n), for the trust score array.

---

## 🔹 Q2: Greatest Common Divisor of Strings ⭐  
**Problem:** Given two strings `str1` and `str2`, return the greatest common divisor (GCD) string that divides both.  
**Leetcode Link:** [Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings)

### ✅ Approach:
- If `str1 + str2 != str2 + str1`, then there’s no common divisor string.
- Otherwise, return `str1[:gcd(len(str1), len(str2))]`, using math.gcd.
- **Time Complexity:** O(n + m), where `n` and `m` are lengths of the strings.  
- **Space Complexity:** O(1)
