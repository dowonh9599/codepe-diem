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