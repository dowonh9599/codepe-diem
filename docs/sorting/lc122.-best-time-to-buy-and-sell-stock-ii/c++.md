# C++

## Solution

```cpp
#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
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

It checks every pair of consecutive days. If the price of the stock increases from one day to the next, it considers that we bought the stock on the first day and sold it on the second, contributing to our total profit. This approach is also known as the "Peak Valley Approach", where you are trying to sum all the increasing differences.

## Complexity Analysis

Time Complexity: `O(n)`

* n is the size of the input vector `prices`. This is because the algorithm goes through the prices vector once, comparing each pair of consecutive days.

Space Complexity: `O(1)`

* the algorithm only uses a few integer variables and doesn't use any additional data structures whose size depends on the input. The input vector is not counted towards the space complexity because it's part of the input, and we're looking at the additional space used.
