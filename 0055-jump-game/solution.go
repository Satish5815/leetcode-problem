package main

func canJump(nums []int) bool {
	farthest := 0

	for i, jump := range nums {
		if i > farthest {
			return false
		}

		if i+jump > farthest {
			farthest = i + jump
		}
		if farthest >= len(nums)-1 {
			return true
		}
	}

	return true
}
