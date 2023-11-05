package sorting.LC121_best_time_to_buy_and_sell_stock;

public class Solution {
  public static int maxProfit(int[] prices) {
    int profit = 0;
    int buyPrice = prices[0];
    for (int price : prices) {
      if (price > buyPrice) {
        profit = Math.max(profit, price - buyPrice);
      } else {
        buyPrice = price;
      }
    }
    return profit;
  }
  public static void main(String[] args) {
    int[] prices = new int[]{7, 1, 5, 3, 6, 4};
    System.out.println(maxProfit(prices));
  }
}
