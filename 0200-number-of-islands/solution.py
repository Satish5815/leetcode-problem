from typing import List


class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid or not grid[0]:
            return 0

        rows, cols = len(grid), len(grid[0])
        islands = 0
        directions = ((1, 0), (-1, 0), (0, 1), (0, -1))

        for row in range(rows):
            for col in range(cols):
                if grid[row][col] != "1":
                    continue

                islands += 1
                grid[row][col] = "0"
                stack = [(row, col)]

                while stack:
                    r, c = stack.pop()
                    for dr, dc in directions:
                        nr, nc = r + dr, c + dc
                        if (
                            0 <= nr < rows
                            and 0 <= nc < cols
                            and grid[nr][nc] == "1"
                        ):
                            grid[nr][nc] = "0"
                            stack.append((nr, nc))

        return islands
