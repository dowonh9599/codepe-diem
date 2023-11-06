package sorting.LC122_LC121_best_time_to_buy_and_sell_stock_2;

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
