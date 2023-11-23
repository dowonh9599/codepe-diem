package main

import (
	"fmt"
	"sort"
)

func removeElement(a []int, val int) int {
	n := len(a)
	j := 0
	for i := 0; i < n; i++ {
		if a[i] != val {
			a[j] = a[i]
			j++
		}
	}
	return j
}

func main() {
	nums := []int{1, 2, 5, 6, 6, 7} // Input array
	val := 6                        // Value to remove

	// The expected answer with correct length.
	// It is sorted with no values equaling val.
	expectedNums := []int{1, 2, 5, 7}

	k := removeElement(nums, val) // Calls your implementation

	if k != len(expectedNums) {
		panic("returned value of removeElement does not match the length of expectedNums array")
	}
	// Sort the first k elements of nums
	newSlice := make([]int, k)
	copy(newSlice, nums[:k])

	// Sort the new slice
	sort.Ints(newSlice)

	// Replace the first k elements in the original slice with the sorted elements from the new slice
	copy(nums[:k], newSlice)

	for i := 0; i < len(expectedNums); i++ {
		if nums[i] != expectedNums[i] {
			message := fmt.Sprintf("element mismatch at index = %d", i)
			panic(message)
		}

		fmt.Printf("%d ", nums[i])
	}
}
