from collections import deque
from typing import List, Optional


class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root is None:
            return []

        queue = deque([root])
        left_to_right = True
        result = []

        while queue:
            size = len(queue)
            level = [0] * size

            for i in range(size):
                node = queue.popleft()
                index = i if left_to_right else size - 1 - i
                level[index] = node.val

                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level)
            left_to_right = not left_to_right

        return result
