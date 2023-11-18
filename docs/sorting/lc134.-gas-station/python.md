# Python

## Solution

```python
class Solution:
  def can_complete_circuit(self, gas: [int], cost: [int]):
    total_gas = 0
    total_cost = 0
    curr_gas = 0
    starting_point = 0

    for i in range(len(gas)):
      total_gas += gas[i]
      total_cost += cost[i]

      curr_gas += (gas[i] - cost[i])

      if curr_gas < 0:
        starting_point += 1
        curr_gas = 0

    if total_gas < total_cost:
      return -1
    else:
      return starting_point

def main():
  gas = [1,2,3,4,5]
  cost = [3,4,5,1,2]

  s = Solution()
  print(s.can_complete_circuit(gas, cost))

main()
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
