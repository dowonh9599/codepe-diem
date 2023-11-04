#include <iostream>

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