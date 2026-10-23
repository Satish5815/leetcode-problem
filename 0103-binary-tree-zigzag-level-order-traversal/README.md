# 103. Binary Tree Zigzag Level Order Traversal

[LeetCode problem](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)

## Approach
Use breadth-first search with a queue. For each level, allocate an array of that level's size and write each value at either index `i` or `size - 1 - i`, alternating direction after every level. Enqueue children from left to right.

## Complexity
- Time: `O(n)`, where `n` is the number of nodes.
- Auxiliary space: `O(w)` for the queue and current level, where `w` is the maximum tree width. The returned output takes `O(n)` space.
