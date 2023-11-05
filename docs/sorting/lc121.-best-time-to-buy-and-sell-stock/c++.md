# C++

## Solution

```cpp
#include <iostream>
#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int>& prices) {
    int lowest = INT_MAX;
    int profit = 0;
    int potentialProfit = 0;
    
    for(int i = 0; i < prices.size(); i++){
      if(prices[i] < lowest){
        lowest = prices[i];
      }
      potentialProfit = prices[i] - lowest;
      if(profit < potentialProfit){
        profit = potentialProfit;
      }
    }
    return profit;
  }
};

int main() {
  std::vector<int> prices = {7,1,5,3,6,4};
  Solution s;
  int output = s.maxProfit(prices);
  std::cout << output << std::endl;
}
```

## Approach

The function `maxProfit` takes in a vector of integers representing the prices of a stock for several days. The goal is to find the maximum possible profit by buying at the lowest price and selling at the highest price after that.

Here is the logic of the code:

1. Initialize `lowest` to `INT_MAX`, and `profit` and `potentialProfit` to `0`.
2. For each price in the `prices` vector:
   * If the current price is less than `lowest`, update `lowest` with the current price.
   * Calculate `potentialProfit` as the difference between the current price and `lowest`.
   * If `profit` is less than `potentialProfit`, update `profit` with `potentialProfit`.

## Complexity Analysis

Time complexity: `O(n)`

* n is the number of days (or the length of the `prices` vector). This is because the code goes through each price in the `prices` vector exactly once.

Space complexity: `O(1)`

* The space used does not increase with the size of the input vector, as the code only uses a fixed amount of space to store the variables `lowest`, `profit`, and `potentialProfit`.
