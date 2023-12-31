function rotate(nums: number[], k: number): void {
  k %= nums.length;
  let n = nums.length
  // reverse full given array
  // from [1,2,3,4,5,6,7] to [7,6,5,4,3,2,1]
  nums = reverseArr(nums, 0, n-1);

  // reverse part from 0 to k - 1;
  // from [7,6,5,4,3,2,1] to [5,6,7,4,3,2,1]
  nums = reverseArr(nums, 0, k-1);

  // reverse part from k to the end;
  // from [5,6,7,4,3,2,1] to [5,6,7,1,2,3,4]
  nums = reverseArr(nums, k, n-1);
};

function reverseArr(nums: number[], l: number, r: number): number[] {
    while(l < r) {
    let temp = nums[l];
    nums[l] = nums[r];
    nums[r] = temp;
    l++;
    r--;
  }

  return nums;
}

function LC189Main() {
  const nums = [1,2,3,4,5,6,7];
  const k = 3;

  rotate(nums, k)
  console.log(nums)
}

LC189Main()