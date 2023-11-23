package problems.sorting.LC134_gas_station;

public class Solution {
  int canCompleteCircuit(int[] gas, int[] cost) {
    int n = gas.length;
    int totalGas = 0,totalCost = 0;
    int currGas = 0, startingPoint = 0;
    for(int i=0;i<n;i++)
    {
        //these two variable are to check if no case is possible
        totalGas += gas[i];
        totalCost += cost[i];
        //for checking the total present gas at index i
        currGas += gas[i] - cost[i];
        if(currGas<0)
        {
           //there is a breakdown....so we will start from next point or index
            startingPoint=i+1;
            //reset our fuel
            currGas=0;
        }
    }
    return (totalGas<totalCost)?-1:startingPoint;
  }

  public static void main(String[] args) {
    int[] gas = new int[]{1,2,3,4,5};
    int[] cost = new int[]{3,4,5,1,2};
    
    Solution s = new Solution();
    System.out.println(s.canCompleteCircuit(gas, cost));
  }
}
