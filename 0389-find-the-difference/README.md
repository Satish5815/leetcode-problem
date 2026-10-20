# 389. Find the Difference

[LeetCode problem](https://leetcode.com/problems/find-the-difference/)

## Approach
XOR all character codes from both strings. Equal characters cancel because `x ^ x == 0`, leaving the added character.

## Complexity
- Time: `O(n)`
- Auxiliary space: `O(1)`
