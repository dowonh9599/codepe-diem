package main

import (
	"fmt"
)

func canJump(nums []int) bool {
	n := len(nums)
	last_pos := n - 1

	for i := n - 1; i < 0; i-- {
		if nums[i]+i >= last_pos {
			last_pos = i
		}
	}

	return last_pos == 0
}

func main() {
	nums1 := []int{2, 3, 1, 1, 4}
	nums2 := []int{3, 2, 1, 0, 4}
	fmt.Println(canJump(nums1))
	fmt.Println(canJump(nums2))
}
