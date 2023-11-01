package main

import (
	"fmt"
	"sort"
)

func majorityElement(nums []int) int {
	sort.Ints(nums)
	n := len(nums)
	return nums[n/2]
}

func main() {
	nums := []int{2, 2, 1, 1, 1, 2, 2}
	majorityNum := majorityElement(nums)
	fmt.Println("majority: ", majorityNum)
}
