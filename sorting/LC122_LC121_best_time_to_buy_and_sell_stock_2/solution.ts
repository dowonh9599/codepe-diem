function maxProfit2(prices: number[]): number {
  let profit: number = 0;
  for (let i = 1; i < prices.length; i++) {
    if (prices[i] > prices[i-1]) {
      profit += prices[i] - prices[i-1]
    }
  }
  return profit;
}

const LC122Main = () => {
  const prices: number[] = [7, 1, 5, 3, 6, 4];
  console.log(maxProfit(prices));
}

LC122Main()