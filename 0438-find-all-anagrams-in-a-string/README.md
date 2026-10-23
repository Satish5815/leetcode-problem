# 438. Find All Anagrams in a String

[LeetCode problem](https://leetcode.com/problems/find-all-anagrams-in-a-string/)

## Approach
Maintain a frequency array for the pattern and a sliding window of the same length in the source string. Compare the 26 lowercase-letter counts for the initial window and after each slide; when they match, record the window's starting index.

## Complexity
- Time: `O(n)`; each window comparison examines 26 fixed counters.
- Auxiliary space: `O(1)`, because the two frequency arrays have fixed size 26.
