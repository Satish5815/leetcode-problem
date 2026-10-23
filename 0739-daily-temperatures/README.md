# 739. Daily Temperatures

[LeetCode problem](https://leetcode.com/problems/daily-temperatures/)

## Approach
Keep indices in a monotonic decreasing stack of temperatures. When a warmer temperature appears, pop each cooler index and set its answer to the distance between the current index and the popped index. Any indices left in the stack have no warmer day later.

## Complexity
- Time: `O(n)`, since every index is pushed and popped at most once.
- Auxiliary space: `O(n)` for the stack and result array.
