# 3886. Sum of Sortable Integers

[LeetCode problem](https://leetcode.com/problems/sum-of-sortable-integers/)

## Approach
Only divisors `k` of `n` are candidates. Precompute prefix maxima, suffix minima, and prefix counts of adjacent descents. Each block must have at most one strict circular descent, and the maximum before a block must not exceed the minimum from that block onward. Enumerate divisors in `O(sqrt(n))`.

## Complexity
- Preprocessing: `O(n)`
- Validation: `O(sum(n / k))` over divisors `k`
- Auxiliary space: `O(n)`
