# Go

## Implementation

```go
// Go
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

```

## Approach <a href="#complexity" id="complexity"></a>

first resizes `nums1` to its valid length of `m` using slice syntax (`nums1[:m]`). Then it appends the valid elements from `nums2` to `nums1` using the `append` function and slice syntax (`nums2[:n]`). Finally, it sorts the combined array in-place using the `sort.Ints` function.

## Complexity <a href="#complexity" id="complexity"></a>

* Time complexity: O((m+n)log(m+n))
  * _due to the sort() function_
* Space complexity: O(1)
  * _We are not using any extra space, so the space complexity is O(1)._

