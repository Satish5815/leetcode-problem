# 56. Merge Intervals

[LeetCode problem](https://leetcode.com/problems/merge-intervals/) · Medium

## Approach
Sort intervals by their start value. Walk through them in order: if the next interval overlaps the last merged interval, extend its end; otherwise, start a new merged interval.

Example: `[[1,3],[2,6],[8,10],[15,18]]` → `[[1,6],[8,10],[15,18]]`.

## Complexity
Let `n` be the number of intervals.
- Time: `O(n log n)` for sorting and a linear scan
- Space: `O(n)` for the merged result
