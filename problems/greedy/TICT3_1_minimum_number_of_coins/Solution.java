package problems.greedy.TICT3_1_minimum_number_of_coins;

public class Solution {
  int minimumCoins(int amount) {
    int count = 0;
    int[] coinTypes = new int[]{500, 100, 50, 10};

    for (int coin: coinTypes) {
      count += amount / coin;
      amount %= coin;
    }

    return count;
  }

  public static void main(String[] args) {
    int amount = 1260;
    Solution s = new Solution();
    System.out.println(s.minimumCoins(amount));
  }
}
