# 678. Valid Parenthesis String

[LeetCode problem](https://leetcode.com/problems/valid-parenthesis-string/)

## Approach
Greedily track the minimum (`low`) and maximum (`high`) possible counts of unmatched opening parentheses. `*` can close, open, or be empty. If `high` becomes negative, the prefix cannot be valid. Clamp `low` to zero and require it to be zero at the end.

## Complexity
- Time: `O(n)`
- Auxiliary space: `O(1)`
