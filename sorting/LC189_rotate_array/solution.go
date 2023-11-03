package main

import (
	"fmt"
	"strconv"
)

// reverse array helper function
func reverse(nums []int, start, end int) {
	for start < end {
		nums[start], nums[end] = nums[end], nums[start]
		start++
		end--
	}
}

// Solution 1: space-efficient
func rotate1(nums []int, k int) {
	n := len(nums)
	reverse(nums, n-k, n-1)
	reverse(nums, 0, n-k-1)
	reverse(nums, 0, n-1)
}

// Solution 2: time-efficient
func rotate2(nums []int, k int) {
	n := len(nums)
	k = k % n

	if n == 1 {
		return
	}

	for i := 0; i < n-k; i++ {
		nums = append(nums, nums[i])
	}

	nums = nums[n-k:]
}

func main() {
	nums := []int{1, 2, 3, 4, 5, 6, 7}
	k := 3
	rotate1(nums, k)
	for i := 0; i < len(nums); i++ {
		fmt.Print(strconv.Itoa(nums[i]) + " ")
	}
}
