from typing import List


class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        if not heights or not heights[0]:
            return []

        rows, cols = len(heights), len(heights[0])
        directions = ((1, 0), (-1, 0), (0, 1), (0, -1))

        def flood(starts):
            seen = [[False] * cols for _ in range(rows)]
            stack = []

            for r, c in starts:
                if not seen[r][c]:
                    seen[r][c] = True
                    stack.append((r, c))

            while stack:
                r, c = stack.pop()
                for dr, dc in directions:
                    nr, nc = r + dr, c + dc
                    if not (0 <= nr < rows and 0 <= nc < cols):
                        continue
                    if seen[nr][nc] or heights[nr][nc] < heights[r][c]:
                        continue
                    seen[nr][nc] = True
                    stack.append((nr, nc))

            return seen

        pacific_starts = (
            [(0, c) for c in range(cols)]
            + [(r, 0) for r in range(rows)]
        )
        atlantic_starts = (
            [(rows - 1, c) for c in range(cols)]
            + [(r, cols - 1) for r in range(rows)]
        )

        pacific = flood(pacific_starts)
        atlantic = flood(atlantic_starts)

        return [
            [r, c]
            for r in range(rows)
            for c in range(cols)
            if pacific[r][c] and atlantic[r][c]
        ]
