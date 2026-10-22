package main

func numIslands(grid [][]byte) int {
	if len(grid) == 0 || len(grid[0]) == 0 {
		return 0
	}

	rows, cols := len(grid), len(grid[0])
	islands := 0
	directions := [][2]int{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}

	for r := 0; r < rows; r++ {
		for c := 0; c < cols; c++ {
			if grid[r][c] != '1' {
				continue
			}

			islands++
			grid[r][c] = '0'
			stack := [][2]int{{r, c}}

			for len(stack) > 0 {
				last := len(stack) - 1
				cell := stack[last]
				stack = stack[:last]

				for _, d := range directions {
					nr, nc := cell[0]+d[0], cell[1]+d[1]
					if nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == '1' {
						grid[nr][nc] = '0'
						stack = append(stack, [2]int{nr, nc})
					}
				}
			}
		}
	}

	return islands
}
