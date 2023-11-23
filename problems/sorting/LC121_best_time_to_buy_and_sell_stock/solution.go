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
