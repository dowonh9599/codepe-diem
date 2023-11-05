# Go

## Solution

```go
package main

import (
	"fmt"
	"math"
)

func maxProfit(prices []int) int {
	profit := 0
	buyPrice := prices[0]
	for _, price := range prices {
		if price > buyPrice {
			profit = int(math.Max(float64(profit), float64(price-buyPrice)))
		} else {
			buyPrice = price
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

The function `maxProfit` tries to find the maximum profit by buying at the lowest price and selling at a higher price afterwards.

Here is the logic of the code:

1. Initialize `profit` to `0` and `buyPrice` to the first price in the `prices` slice. `profit` will keep track of the maximum profit, and `buyPrice` will keep track of the lowest price seen so far.
2. For each `price` in the `prices` slice:
   * If `price` is greater than `buyPrice`, calculate the potential profit by subtracting `buyPrice` from `price`. If this potential profit is greater than the current `profit`, update `profit`.
   * If `price` is not greater than `buyPrice`, it means that `price` is lower than the current `buyPrice`. So, update `buyPrice` to `price`.

## Complexity Analysis

Time complexity: `O(n)`

* n is the length of the `prices` slice. This is because the code iterates through the slice exactly once.

Space complexity: `O(1)`

* This is because the space used by the program does not increase with the size of the input slice. The code only uses a fixed amount of space to store the variables `profit` and `buyPrice`.
