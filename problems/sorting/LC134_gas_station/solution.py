class Solution:
  def can_complete_circuit(self, gas: [int], cost: [int]):
    total_gas = 0
    total_cost = 0
    curr_gas = 0
    starting_point = 0

    for i in range(len(gas)):
      total_gas += gas[i]
      total_cost += cost[i]

      curr_gas += (gas[i] - cost[i])

      if curr_gas < 0:
        starting_point += 1
        curr_gas = 0

    if total_gas < total_cost:
      return -1
    else:
      return starting_point

def main():
  gas = [1,2,3,4,5]
  cost = [3,4,5,1,2]

  s = Solution()
  print(s.can_complete_circuit(gas, cost))

main()