func sortableIntegers(nums []int) int {
    n := len(nums)
    prefMax := make([]int, n+1)
    suffMin := make([]int, n+1)
    prefDrop := make([]int, n)

    for i := 0; i < n; i++ {
        prefMax[i+1] = prefMax[i]
        if nums[i] > prefMax[i+1] {
            prefMax[i+1] = nums[i]
        }
    }
    suffMin[n] = int(^uint(0) >> 1)
    for i := n - 1; i >= 0; i-- {
        suffMin[i] = nums[i]
        if suffMin[i+1] < suffMin[i] {
            suffMin[i] = suffMin[i+1]
        }
    }
    for i := 1; i < n; i++ {
        prefDrop[i] = prefDrop[i-1]
        if nums[i-1] > nums[i] {
            prefDrop[i]++
        }
    }

    check := func(k int) bool {
        for start := 0; start < n; start += k {
            end := start + k - 1
            drops := prefDrop[end] - prefDrop[start]
            if nums[end] > nums[start] {
                drops++
            }
            if drops > 1 || prefMax[start] > suffMin[start] {
                return false
            }
        }
        return true
    }

    answer := 0
    for d := 1; d <= n/d; d++ {
        if n%d == 0 {
            if check(d) {
                answer += d
            }
            other := n / d
            if other != d && check(other) {
                answer += other
            }
        }
    }
    return answer
}
