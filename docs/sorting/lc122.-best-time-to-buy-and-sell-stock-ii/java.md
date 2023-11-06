# Java

## Solution

```java
package sorting.LC122_best_time_to_buy_and_sell_stock_2;

public class Solution {
  public static int maxProfit(int[] prices) {
    int profit = 0;
    for (int i = 1; i < prices.length; i++) {
      if (prices[i] > prices[i - 1]) {
        profit += prices[i] - prices[i - 1];
      }
    }
    return profit;
  }
  public static void main(String[] args) {
    int[] prices = new int[]{7, 1, 5, 3, 6, 4};
    System.out.println(maxProfit(prices));
  }
}

```

## Approach

It checks every pair of consecutive days. If the price of the stock increases from one day to the next, it considers that we bought the stock on the first day and sold it on the second, contributing to our total profit. This approach is also known as the "Peak Valley Approach", where you are trying to sum all the increasing differences.

## Complexity Analysis

Time Complexity: `O(n)`

* n is the size of the input vector `prices`. This is because the algorithm goes through the prices vector once, comparing each pair of consecutive days.

Space Complexity: `O(1)`

* the algorithm only uses a few integer variables and doesn't use any additional data structures whose size depends on the input
