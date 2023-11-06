# Go

## Solution

```go
package main

import (
	"fmt"
)

func maxProfit(prices []int) int {
	profit := 0
	for i := 1; i < len(prices); i++ {
		if prices[i] > prices[i-1] {
			profit += prices[i] - prices[i-1]
		}
	}
	return profit
}

func main() {
	prices := []int{7, 1, 5, 3, 6, 4}
	fmt.Println(maxProfit(prices))
}
```

## Approach

It checks every pair of consecutive days. If the price of the stock increases from one day to the next, it considers that we bought the stock on the first day and sold it on the second, contributing to our total profit. This approach is also known as the "Peak Valley Approach", where you are trying to sum all the increasing differences.

## Complexity Analysis

Time Complexity: `O(n)`

* n is the size of the input vector `prices`. This is because the algorithm goes through the prices vector once, comparing each pair of consecutive days.

Space Complexity: `O(1)`

* the algorithm only uses a few integer variables and doesn't use any additional data structures whose size depends on the input. The input vector is not counted towards the space complexity because it's part of the input, and we're looking at the additional space used.
