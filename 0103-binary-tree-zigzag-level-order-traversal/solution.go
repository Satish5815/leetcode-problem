func zigzagLevelOrder(root *TreeNode) [][]int {
	if root == nil {
		return [][]int{}
	}

	queue := []*TreeNode{root}
	leftToRight := true
	result := make([][]int, 0)

	for len(queue) > 0 {
		size := len(queue)
		level := make([]int, size)

		for i := 0; i < size; i++ {
			node := queue[0]
			queue = queue[1:]

			index := i
			if !leftToRight {
				index = size - 1 - i
			}
			level[index] = node.Val

			if node.Left != nil {
				queue = append(queue, node.Left)
			}
			if node.Right != nil {
				queue = append(queue, node.Right)
			}
		}

		result = append(result, level)
		leftToRight = !leftToRight
	}

	return result
}
