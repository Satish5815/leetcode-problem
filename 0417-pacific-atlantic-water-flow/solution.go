func pacificAtlantic(heights [][]int) [][]int {
	if len(heights) == 0 || len(heights[0]) == 0 {
		return [][]int{}
	}

	m, n := len(heights), len(heights[0])
	pacific := make([][]bool, m)
	atlantic := make([][]bool, m)
	for r := 0; r < m; r++ {
		pacific[r] = make([]bool, n)
		atlantic[r] = make([]bool, n)
	}

	dirs := [][2]int{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}
	flood := func(seen [][]bool, starts [][2]int) {
		stack := make([][2]int, 0, len(starts))
		for _, cell := range starts {
			r, c := cell[0], cell[1]
			if !seen[r][c] {
				seen[r][c] = true
				stack = append(stack, cell)
			}
		}

		for len(stack) > 0 {
			cell := stack[len(stack)-1]
			stack = stack[:len(stack)-1]
			r, c := cell[0], cell[1]

			for _, d := range dirs {
				nr, nc := r+d[0], c+d[1]
				if nr < 0 || nr >= m || nc < 0 || nc >= n || seen[nr][nc] {
					continue
				}
				if heights[nr][nc] >= heights[r][c] {
					seen[nr][nc] = true
					stack = append(stack, [2]int{nr, nc})
				}
			}
		}
	}

	pacificStarts := make([][2]int, 0, m+n)
	atlanticStarts := make([][2]int, 0, m+n)
	for r := 0; r < m; r++ {
		pacificStarts = append(pacificStarts, [2]int{r, 0})
		atlanticStarts = append(atlanticStarts, [2]int{r, n - 1})
	}
	for c := 0; c < n; c++ {
		pacificStarts = append(pacificStarts, [2]int{0, c})
		atlanticStarts = append(atlanticStarts, [2]int{m - 1, c})
	}

	flood(pacific, pacificStarts)
	flood(atlantic, atlanticStarts)

	result := make([][]int, 0)
	for r := 0; r < m; r++ {
		for c := 0; c < n; c++ {
			if pacific[r][c] && atlantic[r][c] {
				result = append(result, []int{r, c})
			}
		}
	}
	return result
}
