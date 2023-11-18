# Go

## Solution

```go
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

```

## Approach

The function `canCompleteCircuit` is trying to solve the problem of finding a starting gas station in a circular route, where an amount of gas is available at each station, and a cost in gas to travel to the next station. The function returns the index of the starting gas station if it's possible to travel around the circuit once in a clockwise direction, otherwise, it returns -1.

The function works by:

* Iterating through each gas station and calculating the total gas available and total cost to travel to the next station.
* While iterating, it also maintains a `currGas` variable that stores the amount of gas left after reaching each station.
* If at any station the gas left (i.e., `currGas`) is less than 0, it means the journey can't be started from the current `startingPoint`, so the `startingPoint` is moved to the next station and `currGas` is reset to 0.
* Finally, if the total gas available is less than the total cost, it means the journey can't be completed and returns -1. If not, it returns the `startingPoint`.

## Complexity Analysis

Time Complexity: `O(n)`

* n is the number of gas stations (i.e., the length of the gas array). This is because the function only uses one loop that iterates through each gas station once.

Space Complexity: `O(1)`

* constant space complexity. This is because the function only uses a fixed amount of space to store the variables `n`, `totalGas`, `totalCost`, `currGas`, and `startingPoint`. The space used does not increase with the size of the input arrays, so the space complexity is constant.
