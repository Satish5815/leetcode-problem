# 200. Number of Islands

[LeetCode problem](https://leetcode.com/problems/number-of-islands/) · Medium

## Approach
Scan every cell. When a land cell (`'1'`) is found, increment the island count and run an iterative depth-first search to visit its connected land cells in four directions. Mark cells as water when adding them to the stack so each cell is processed at most once. This implementation mutates the input grid.

## Complexity
Let `m` be the number of rows and `n` the number of columns.
- Time: `O(m · n)`
- Space: `O(m · n)` worst case for the DFS stack
