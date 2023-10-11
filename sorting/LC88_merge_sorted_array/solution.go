package main

import (
	"fmt"
	"sort"
)

func merge(nums1 []int, m int, nums2 []int, n int) []int {
	for j, i := 0, m; j < n; j++ {
		nums1[i] = nums2[j]
		i++
	}
	sort.Ints(nums1)
	return nums1
}

func main() {
	nums1 := []int{1, 2, 3, 0, 0, 0}
	m := 3
	nums2 := []int{2, 5, 6}
	n := 3
	merged := merge(nums1, m, nums2, n)
	fmt.Println(merged)
}
