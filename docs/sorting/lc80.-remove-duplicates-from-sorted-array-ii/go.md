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

## Approach

**Solution 1**

The inner loop in this function finds the number of occurrences of the current number `curr`. The outer loop keeps track of the current number and increases the index `i` accordingly. If `cnt` (count of duplicate occurrences) is more than 1, the function ensures that the number `curr` occurs exactly twice in the slice. If `cnt` is not more than 1, the number is simply moved to the position `k`. The index `k` is then increased accordingly.

**Solution 2**

This function also removes duplicates from the integer slice `nums`, but it only allows each number to occur at most twice. It does this by checking that the current number `nums[i]` is either the first or second number in the slice, or it is different from the number two positions before in the updated slice. If any of these conditions are met, the function moves `nums[i]` to the position `index` in the slice.

## Complexity Analysis

**Solution 1**

* Time Complexity: `O(n)` in the worst-case scenario (when all the numbers are the same) because it processes each number in the slice. However, the function may perform better than O(n) in cases where there are many duplicate numbers because it skips over them.
* Space Complexity: `O(1)`

**Solution 2**

* Time Complexity: `O(n)`, where n is the length of `nums`, because it processes each number in the slice exactly once.
* Space Complexity: `O(1)`
