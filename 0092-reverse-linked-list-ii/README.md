# 92. Reverse Linked List II

[LeetCode problem](https://leetcode.com/problems/reverse-linked-list-ii/)

## Approach
Use a dummy node so reversing from position 1 is handled uniformly. Move `prev` to the node before `left`, then repeatedly move the node after `curr` to the front of the reversing section.

## Complexity
- Time: `O(n)`
- Auxiliary space: `O(1)`
