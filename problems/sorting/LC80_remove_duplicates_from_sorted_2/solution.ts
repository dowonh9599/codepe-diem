class Solution {
  public removeDuplicates1(nums: number[]): number {
      let k = 0, i = 0;
      while(i < nums.length){
          let curr = nums[i];
          let cnt = 0;
          while(i < nums.length && nums[i] === curr) {
              cnt++;
              i++;
          }
          if(cnt > 1) {
              nums[k] = curr;
              k++;
              nums[k] = curr;
              k++;
          }
          else {
              nums[k] = curr;
              k++;
          }
      }
      return k;
  }

  public removeDuplicates2(nums: number[]): number {
      let i = 0;
      for (let ele of nums) {
          if(i === 0 || i === 1 || nums[i - 2] !== ele) {
              nums[i] = ele;
              i++;
          }
      }
      return i;
  }
};

function LC80() {
  let nums: number[] = [0,0,1,1,1,1,2,3,3]; // Input array
  let expectedNums: number[] = [0,0,1,1,2,3,3]; // The expected answer with correct length
  
  let s = new Solution();
  let k = s.removeDuplicates1(nums); // Calls your implementation
  
  if (k !== expectedNums.length) {
    console.error("returned value of removeDuplicates does not match the length of expectedNums array");
  } else {
    for (let i = 0; i < k; i++) {
        if (nums[i] !== expectedNums[i]) {
            console.error("element mismatch at index = " + i.toString());
            return;
        } else {
            console.log(nums[i] + " ");
        }
    }
  }
}

LC80()