function canCompleteCircuit(gas: number[], cost: number[]) {
  let n=gas.length;
  let totalGas=0,totalCost=0;
  let currGas=0, startingPoint=0;
  for(let i=0;i<n;i++)
  {
    //these two variable are to check if no case is possible
    totalGas+=gas[i];
    totalCost+=cost[i];
    //for checking the total present gas at index i
    currGas+=gas[i]-cost[i];
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

function LC134Main() {
  const gas = [1,2,3,4,5];
  const cost = [3,4,5,1,2];
  
  console.log(canCompleteCircuit(gas, cost))
}

LC134Main()
