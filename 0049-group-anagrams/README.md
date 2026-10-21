# 49. Group Anagrams

[LeetCode problem](https://leetcode.com/problems/group-anagrams/) · Medium

## Approach
Sort the characters in each string to create a canonical key. Strings with the same sorted key are anagrams, so group them in a hash map. The order of groups does not matter.

Example: `["eat","tea","tan","ate","nat","bat"]` → groups equivalent to `[["eat","tea","ate"],["tan","nat"],["bat"]]`.

## Complexity
Let `n` be the number of strings and `k` the maximum string length.
- Time: `O(n · k log k)`
- Space: `O(n · k)` for the groups and keys
