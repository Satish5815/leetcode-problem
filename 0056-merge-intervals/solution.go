package main

import "sort"

func merge(intervals [][]int) [][]int {
	if len(intervals) == 0 {
		return [][]int{}
	}

	sort.Slice(intervals, func(i, j int) bool {
		return intervals[i][0] < intervals[j][0]
	})

	merged := make([][]int, 0, len(intervals))
	for _, interval := range intervals {
		last := len(merged) - 1
		if last < 0 || interval[0] > merged[last][1] {
			merged = append(merged, []int{interval[0], interval[1]})
			continue
		}
		if interval[1] > merged[last][1] {
			merged[last][1] = interval[1]
		}
	}
	return merged
}
