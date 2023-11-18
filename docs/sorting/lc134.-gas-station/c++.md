# C++

## Solution

```cpp
#include <iostream>
#include <vector>

class Solution {
public:
  int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
    int n=gas.size();
    int totalGas=0,totalCost=0;
    int currGas=0, startingPoint=0;
    for(int i=0;i<n;i++)
    {
      //these two variable are to check if no case is possible
      totalGas+=gas[i];
      totalCost+=cost[i];
      //for checking the total present gas at index i
      currGas+=gas[i]-cost[i];
      if(currGas<0)
      {
         //there is a breakdown....so we will start from next point or index
        startingPoint=i+1;
        //reset our fuel
        currGas=0;
      }
    }
    return (totalGas<totalCost)?-1:startingPoint;
  }
};

int main() {
  std::vector<int> gas = {1,2,3,4,5};
  std::vector<int> cost = {3,4,5,1,2};
  
  Solution s = Solution();
  std::cout << s.canCompleteCircuit(gas, cost) << std::endl;
  
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
