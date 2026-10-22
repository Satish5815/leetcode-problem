/**
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function(grid) {
    if (!grid.length || !grid[0].length) return 0;

    const rows = grid.length;
    const cols = grid[0].length;
    const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];
    let islands = 0;

    for (let r = 0; r < rows; r++) {
        for (let c = 0; c < cols; c++) {
            if (grid[r][c] !== "1") continue;

            islands++;
            grid[r][c] = "0";
            const stack = [[r, c]];

            while (stack.length) {
                const [row, col] = stack.pop();
                for (const [dr, dc] of directions) {
                    const nr = row + dr;
                    const nc = col + dc;
                    if (
                        nr >= 0 && nr < rows &&
                        nc >= 0 && nc < cols &&
                        grid[nr][nc] === "1"
                    ) {
                        grid[nr][nc] = "0";
                        stack.push([nr, nc]);
                    }
                }
            }
        }
    }

    return islands;
};
