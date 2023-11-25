# Java

## Solution

```java
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
```

## Approach

This problem is a representative one that can be solved using a greedy algorithm. With a simple idea, the problem can be solved. That is, starting with the largest denomination of currency, we give change. When we have to give N won in change, we firstly give as much as we can in 500 won. Then we proceed with 100 won, 50 won, and 10 won coins in that order, giving as much change as we can with each. This way, we can give all the change with the minimum number of coins.

The reason why this problem can be solved with a greedy algorithm is because the larger denomination coins we have are always multiples of the smaller denomination ones, so it's impossible for a different solution to come out by combining smaller denomination coins.

## Complexity Analysis

Time Complexity: `O(n)`

* We need to perform iterations for as many types of coins as there are. Therefore, if there are n types of coins, the time complexity of the above source code is O(n). Notably, in the time complexity, you can see that the amount of money N to be changed cannot be referenced. In other words, we can see that the time complexity of this algorithm is affected only by the total types of coins, regardless of the size of the amount that needs to be given as change.

Space Complexity: `O(1)`

* constant space complexity is used in this problem since there isn't any new memory allocated to solve the problem.
