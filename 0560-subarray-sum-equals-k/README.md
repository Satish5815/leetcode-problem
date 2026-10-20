# 560. Subarray Sum Equals K

[LeetCode problem](https://leetcode.com/problems/subarray-sum-equals-k/)

## Approach
Maintain a running prefix sum and a frequency map of previously seen prefix sums. For each current sum `prefix`, add the frequency of `prefix - k` to the answer. Initialize the map with `{0: 1}` to count subarrays starting at index zero.

## Complexity
- Time: `O(n)` expected
- Space: `O(n)`
