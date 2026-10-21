# 128. Longest Consecutive Sequence

[LeetCode problem](https://leetcode.com/problems/longest-consecutive-sequence/) · Medium

## Approach
Put all values in a hash set. Only start counting from a value whose predecessor (`value - 1`) is absent; then count consecutive successors. This ensures each sequence is scanned from its beginning rather than repeatedly from every value.

Example: `[100,4,200,1,3,2]` → `4`, from the sequence `[1,2,3,4]`.

## Complexity
Let `n` be the number of values.
- Time: `O(n)` expected
- Space: `O(n)`
