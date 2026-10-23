# 417. Pacific Atlantic Water Flow

[LeetCode problem](https://leetcode.com/problems/pacific-atlantic-water-flow/)

## Approach
Traverse the grid in reverse from each ocean's borders. Water can flow from a cell to a neighboring cell whose height is greater than or equal to the current height, so reverse traversal moves uphill or across equal heights. Track cells reachable from the Pacific and Atlantic separately; return their intersection.

The implementations use iterative DFS to avoid recursion-depth problems on large grids.

## Complexity
- Time: `O(m × n)`, because each cell is visited at most once per ocean.
- Auxiliary space: `O(m × n)` for the visited grids and DFS stacks.
