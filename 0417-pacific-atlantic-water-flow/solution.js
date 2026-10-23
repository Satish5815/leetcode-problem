var pacificAtlantic = function(heights) {
    if (heights.length === 0 || heights[0].length === 0) return [];

    const rows = heights.length;
    const cols = heights[0].length;
    const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];

    const flood = (starts) => {
        const seen = Array.from({ length: rows }, () => Array(cols).fill(false));
        const stack = [];

        for (const [r, c] of starts) {
            if (!seen[r][c]) {
                seen[r][c] = true;
                stack.push([r, c]);
            }
        }

        while (stack.length > 0) {
            const [r, c] = stack.pop();
            for (const [dr, dc] of directions) {
                const nr = r + dr;
                const nc = c + dc;
                if (nr < 0 || nr >= rows || nc < 0 || nc >= cols) continue;
                if (seen[nr][nc] || heights[nr][nc] < heights[r][c]) continue;
                seen[nr][nc] = true;
                stack.push([nr, nc]);
            }
        }

        return seen;
    };

    const pacificStarts = [];
    const atlanticStarts = [];
    for (let r = 0; r < rows; r++) {
        pacificStarts.push([r, 0]);
        atlanticStarts.push([r, cols - 1]);
    }
    for (let c = 0; c < cols; c++) {
        pacificStarts.push([0, c]);
        atlanticStarts.push([rows - 1, c]);
    }

    const pacific = flood(pacificStarts);
    const atlantic = flood(atlanticStarts);
    const result = [];

    for (let r = 0; r < rows; r++) {
        for (let c = 0; c < cols; c++) {
            if (pacific[r][c] && atlantic[r][c]) result.push([r, c]);
        }
    }
    return result;
};
