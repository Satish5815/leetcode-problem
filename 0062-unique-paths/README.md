# 62. Unique Paths

[LeetCode problem](https://leetcode.com/problems/unique-paths/) · Medium

## Approach
Use one DP array where `dp[c]` stores the number of ways to reach the current row and column. The first row and first column each have one path. For every other cell, add the paths from above (`dp[c]` before updating) and from the left (`dp[c - 1]`). A single row is enough, so no full matrix is needed.

## Complexity
Let `m` be the number of rows and `n` the number of columns.
- Time: `O(m · n)`
- Space: `O(n)`
