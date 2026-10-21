package main

func longestConsecutive(nums []int) int {
	values := make(map[int]struct{}, len(nums))
	for _, num := range nums {
		values[num] = struct{}{}
	}

	longest := 0
	for num := range values {
		if _, hasPrevious := values[num-1]; hasPrevious {
			continue
		}

		length := 1
		next := num + 1
		for {
			if _, exists := values[next]; !exists {
				break
			}
			length++
			next++
		}
		if length > longest {
			longest = length
		}
	}
	return longest
}
