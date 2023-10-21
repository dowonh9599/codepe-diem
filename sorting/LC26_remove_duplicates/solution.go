package main

import (
	"fmt"
)

func removeDuplicates(nums []int) int {
	index := 0
	for i := 0; i < len(nums); i++ {
		if nums[index] == nums[i] {
			continue
		} else {
			index++
			nums[index] = nums[i]
		}
	}
	return index + 1
}

func main() {
	nums := []int{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}
	expectedNums := []int{0, 1, 2, 3, 4}

	k := removeDuplicates(nums)

	if k != len(expectedNums) {
		panic("returned value of removeDuplicates does not match the length of expectedNums array")
	}

	for i := 0; i < k; i++ {
		if nums[i] != expectedNums[i] {
			message := fmt.Sprintf("element mismatch at index = %d", i)
			panic(message)
		}

		fmt.Printf("%d ", nums[i])
	}
}
