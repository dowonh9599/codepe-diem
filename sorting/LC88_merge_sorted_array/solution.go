package main

import (
	"fmt"
	"sort"
)

func merge(nums1 []int, m int, nums2 []int, n int) []int {
	nums1 = nums1[:m]
	nums1 = append(nums1, nums2[:n]...)
	sort.Ints(nums1)
	return nums1
}

func main() {
	nums1 := []int{1, 2, 3, 0, 0, 0}
	m := 3
	nums2 := []int{2, 5, 6}
	n := 3

	merged := merge(nums1, m, nums2, n)
	for _, num := range merged {
		fmt.Printf("%d ", num)
	}
	fmt.Println()
}
