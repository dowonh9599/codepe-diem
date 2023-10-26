# Go

## Solution

```go
package main

import (
	"fmt"
)

// time-complexity-wise efficient
func removeDuplicates(nums []int) int {
	k := 0
	i := 0
	for i < len(nums) {
		curr := nums[i]
		cnt := 0
		for i < len(nums) && nums[i] == curr {
			cnt++
			i++
		}
		if cnt > 1 {
			nums[k] = curr
			k++
			nums[k] = curr
			k++
		} else {
			nums[k] = curr
			k++
		}
	}
	return k
}

// O(n) time complexity solution
func removeDuplicates2(nums []int) int {
	index := 0
	i := 0
	// int ele= nums[0];
	for i < len(nums) {
		if index == 0 || index == 1 || nums[index-2] != nums[i] {
			nums[index] = nums[i]
			i++
		}
	}
	return index
}

func main() {
	nums := []int{0, 0, 1, 1, 1, 1, 2, 3, 3}
	expectedNums := []int{0, 0, 1, 1, 2, 3, 3}

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

```
