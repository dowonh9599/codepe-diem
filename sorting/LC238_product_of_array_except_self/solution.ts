function productExceptSelf(nums: number[]) {
  const output = [1];
  output[0] = 1;
  for (let i = 1; i < nums.length; i++) {
      output.push(output[i-1] * nums[i-1])
  }
  let right = 1;
  for (let i = nums.length - 1; i >= 0; i--) {
      output[i] *= right;
      right *= nums[i];
  }
  return output;
}

function LC238Main() {
  const nums = [1,2,3,4]

  const output = productExceptSelf(nums);
  console.log(output);
}

LC238Main()
