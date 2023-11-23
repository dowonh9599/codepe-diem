class Solution:
  def maxProfit(self, prices: List[int]) -> int:
    profit = 0
    buy_price = prices[0]
    for price in prices:
      if price > buy_price:
        profit = max(profit, price - buy_price)
      else:
        buy_price = price
    return profit
  
def LC121Main():
  nums = [7,1,5,3,6,4]
  s = Solution()
  profit = s.maxProfit(nums)
  print(profit)

LC121Main()