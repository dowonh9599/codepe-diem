function minimumCoins(amount: number) {
  let count = 0
  const coinTypes = [500,100,50,10]

  for (const coin of coinTypes) {
    count += Math.floor(amount / coin)
    amount %= coin
  }
  return count
}

function TCCT3_1Main() {
  const amount = 1260
  console.log(minimumCoins(amount))
}

TCCT3_1Main()