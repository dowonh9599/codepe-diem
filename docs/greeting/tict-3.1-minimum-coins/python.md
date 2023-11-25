# Python

## Solution

```python
class Solution:
  def minimumCoins(self, amount: int) -> int:
    count = 0
    coin_types = [500,100,50,10]

    for coin in coin_types:
      print(amount)
      count += amount // coin
      print(count)
      amount %= coin
    
    return count

def main():
  amount = 1260
  s = Solution()
  print(s.minimumCoins(amount))

main()
```

## Approach

This problem is a representative one that can be solved using a greedy algorithm. With a simple idea, the problem can be solved. That is, starting with the largest denomination of currency, we give change. When we have to give N won in change, we firstly give as much as we can in 500 won. Then we proceed with 100 won, 50 won, and 10 won coins in that order, giving as much change as we can with each. This way, we can give all the change with the minimum number of coins.

The reason why this problem can be solved with a greedy algorithm is because the larger denomination coins we have are always multiples of the smaller denomination ones, so it's impossible for a different solution to come out by combining smaller denomination coins.

## Complexity Analysis

Time Complexity: `O(n)`

* We need to perform iterations for as many types of coins as there are. Therefore, if there are n types of coins, the time complexity of the above source code is O(n). Notably, in the time complexity, you can see that the amount of money N to be changed cannot be referenced. In other words, we can see that the time complexity of this algorithm is affected only by the total types of coins, regardless of the size of the amount that needs to be given as change.

Space Complexity: `O(1)`

* constant space complexity is used in this problem since there isn't any new memory allocated to solve the problem.
