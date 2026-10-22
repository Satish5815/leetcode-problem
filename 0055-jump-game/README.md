# 55. Jump Game

[LeetCode problem](https://leetcode.com/problems/jump-game/) · Medium

## Approach
Greedily track the farthest index reachable so far. If the current index is beyond that boundary, it cannot be reached and the answer is false. Otherwise, extend the boundary with `i + nums[i]`. Reaching the last index means the array is solvable.

## Complexity
- Time: `O(n)`
- Space: `O(1)`
