# 79. Word Search

[LeetCode problem](https://leetcode.com/problems/word-search/)

## Approach
Run DFS from each cell. Match the next character, temporarily mark the cell visited, and explore four neighbors. Restore the cell when returning from recursion so other paths can reuse it.

## Complexity
- Time: `O(m * n * 4^L)` upper bound, where `L` is the word length
- Auxiliary space: `O(L)` recursion depth
