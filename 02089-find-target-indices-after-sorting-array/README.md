# 2089. Find Target Indices After Sorting Array

[LeetCode problem](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

## Approach
Count values smaller than `target` and count values equal to `target`. After sorting, the target indices are the consecutive range starting at the count of smaller values, with length equal to the count of equal values. This avoids sorting.

## Complexity
- Time: `O(n)`
- Auxiliary space: `O(1)` excluding the output
