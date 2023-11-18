package main

import (
	"fmt"
)

func canCompleteCircuit(gas []int, cost []int) int {
	totalGas := 0
	totalCost := 0
	currGas := 0
	startingPoint := 0

	for i := 0; i < len(gas); i++ {
		totalGas += gas[i]
		totalCost += cost[i]

		currGas += (gas[i] - cost[i])

		if currGas < 0 {
			startingPoint++
			currGas = 0
		}
	}

	if totalGas < totalCost {
		return -1
	} else {
		return startingPoint
	}
}

func main() {
	gas := []int{1, 2, 3, 4, 5}
	cost := []int{3, 4, 5, 1, 2}

	fmt.Println(canCompleteCircuit(gas, cost))
}
