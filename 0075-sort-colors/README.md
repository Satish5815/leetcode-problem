# 75. Sort Colors

[LeetCode problem](https://leetcode.com/problems/sort-colors/) · Medium

## Approach
Use the Dutch National Flag algorithm with three pointers: `low` marks the next position for 0, `mid` scans the array, and `high` marks the next position for 2. Swap 0s to the front, leave 1s in the middle, and swap 2s to the back. When swapping with `high`, do not advance `mid` because the incoming value has not been inspected yet.

## Complexity
- Time: `O(n)`
- Space: `O(1)` (in-place)
