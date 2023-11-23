function canJump(nums: Array<number>) {
  let n = nums.length;
  let lastPos = n - 1;

  for (let i = n - 1; i >= 0; i--) {
      if (nums[i] + i >= lastPos) {
          lastPos = i;
      }
  }

  return lastPos === 0;
}

console.log(canJump([2,3,1,1,4])); // output: true
console.log(canJump([3,2,1,0,4])); // output: false