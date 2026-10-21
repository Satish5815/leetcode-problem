# 238. Product of Array Except Self

[LeetCode problem](https://leetcode.com/problems/product-of-array-except-self/) · Medium

## Approach
Build prefix products from left to right, storing the product of all values before each index. Then walk right to left with a suffix product and multiply it into each result. No division is used, so zeros are handled naturally.

Example: `[1,2,3,4]` → `[24,12,8,6]`.

## Complexity
Let `n` be the array length.
- Time: `O(n)`
- Auxiliary space: `O(1)`, excluding the required output array (`O(n)`)
