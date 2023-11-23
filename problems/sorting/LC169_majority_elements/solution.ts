function majorityElement(nums: number[]): number {
  nums.sort((a, b) => a - b);
  let n: number = nums.length;
  return nums[Math.floor(n/2)];
}

function LC169Main() {
  const nums = [2, 2, 1, 1, 1, 2, 2]
  const majorityNums = majorityElement(nums)
  console.log("majority: " + majorityNums)
}

LC169Main()