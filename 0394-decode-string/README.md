# 394. Decode String

[LeetCode problem](https://leetcode.com/problems/decode-string/)

## Approach
Use stacks to store repeat counts and the prefix built before each opening bracket. When a closing bracket appears, repeat the inner decoded string and append it to the saved prefix.

## Complexity
- Time: `O(n + m)`, where `n` is encoded length and `m` is decoded output length
- Space: `O(n + m)` for stacks and output
