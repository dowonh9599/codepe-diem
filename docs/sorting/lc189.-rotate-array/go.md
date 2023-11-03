# Go

## Solution

<pre class="language-go"><code class="lang-go">package main

import (
	"fmt"
	"strconv"
)

// reverse array helper function
func reverse(nums []int, start, end int) {
<strong>	for start &#x3C; end {
</strong>		nums[start], nums[end] = nums[end], nums[start]
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

	for i := 0; i &#x3C; n-k; i++ {
		nums = append(nums, nums[i])
	}

	nums = nums[n-k:]
}

func main() {
	nums := []int{1, 2, 3, 4, 5, 6, 7}
	k := 3
	rotate1(nums, k)
	for i := 0; i &#x3C; len(nums); i++ {
		fmt.Print(strconv.Itoa(nums[i]) + " ")
	}
}
</code></pre>

## Approach

**Solution 1**

The first solution involves three steps and uses the **reverse** function:

1. Reverse the last `k` elements.
2. Reverse the first `n-k` elements.
3. Reverse the entire array.

**Solution 2**

The second solution involves copying elements to the end of the array, then slicing the array to get the desired result:

1. Copy the first `n-k` elements to the end of the array.
2. Slice the array from the `n-k`th position to the end.

## Complexity Analysis

**Solution 1**

Time complexity: `O(n)`

* each reversal iterates through the array once, and we perform the reversal three times, giving us a total of 3n iterations, which is still O(n) in Big O notation.

Space complexity: `O(1)`

* The reversing is done in place, so it doesn't require additional space

**Solution 2**

Time complexity: `O(n)`

* more time-efficient because it only involves a single pass through the array

Space complexity: `O(n)`

* it requires additional space to store the copied elements,

