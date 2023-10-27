# Typescript

## Solution

```typescript
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
```

## Approach

**Solution 1**

This function uses a two-pointer technique. The `i` pointer scans through the original array, and `k` keeps track of the position in the modified array.

**Solution 2**

This function also uses a two-pointer approach where `i` keeps track of the position in the modified array and `ele` iterates through each element in the original array using an enhanced `for` loop.

The function checks three conditions for each element `ele` in the array:

1. If `i` is 0, which means it's the first element in the array.
2. If `i` is 1, which means it's the second element in the array.
3. If the current element `ele` is not equal to the element two positions before in the modified array (`nums[i - 2]`).

## Complexity Analysis

* Time Complexity: `O(n)`, both functions modify the array in place, meaning they do not use any additional space proportion to the size of the input.
* Space Complexity: `O(1)`, The extra space used is constant, for variables like `i`, `k`, `cnt`, `curr`, and `ele`. Therefore, the space complexity for both functions is O(1).

