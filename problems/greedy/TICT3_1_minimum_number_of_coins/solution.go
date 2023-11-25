package main

import (
	"fmt"
)

func minimumCoins(amount int) int {
	count := 0
	coinTypes := []int{500, 100, 50, 10}
	for _, coin := range coinTypes {
		count += amount / coin
		amount %= coin
	}

	return count
}

func main() {
	amount := 1260
	fmt.Println(minimumCoins(amount))
}
