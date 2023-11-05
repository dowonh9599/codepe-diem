# Typescript

## Solution

```typescript
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
```

## Approach

The function `maxProfit` takes an array of integers representing the prices of a stock for several days.

Here is the logic of the code:

1. Initialize `profit` to `0` and `buyPrice` to the first price in the `prices` array. `profit` will keep track of the maximum profit, and `buyPrice` will keep track of the lowest price seen so far.
2. For each `price` in the `prices` array:
   * If `price` is greater than `buyPrice`, calculate the potential profit by subtracting `buyPrice` from `price`. If this potential profit is greater than the current `profit`, update `profit`.
   * If `price` is less than or equal to `buyPrice`, it means that `price` is lower than the current `buyPrice`. So, update `buyPrice` to `price`.
3. After checking all prices, return the maximum profit.

## Complexity Analysis

Time complexity: `O(n)`

* n is the length of the `prices` array. This is because the code iterates through the array exactly once.

Space complexity: `O(1)`

* This is because the space used by the program does not increase with the size of the input array. The code only uses a fixed amount of space to store the variables `profit` and `buyPrice`.
