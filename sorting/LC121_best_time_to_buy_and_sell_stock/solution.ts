function maxProfit(prices: number[]): number {
  let profit: number = 0;
  let buyPrice: number = prices[0];
  for (let price of prices) {
      if (price > buyPrice) {
          profit = Math.max(profit, price - buyPrice);
      } else {
          buyPrice = price;
      }
  }
  return profit;
}

const main = () => {
  const prices: number[] = [7, 1, 5, 3, 6, 4];
  console.log(maxProfit(prices));
}

