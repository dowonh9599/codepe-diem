package main

import (
	"fmt"
)

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func jump(nums []int) int {
	n := len(nums)
	if n < 2 {
		return 0
	}

	maxPos := nums[0]
	maxSteps := nums[0]

	jumps := 1
	for i := 1; i < n; i++ {
		if maxSteps < i {
			jumps++
			maxSteps = maxPos
		}
		maxPos = max(maxPos, nums[i]+i)
	}

	return jumps
}

func main() {
	nums := []int{2, 3, 1, 1, 4}
	fmt.Println(jump(nums))
}
