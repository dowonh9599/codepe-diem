# Typescript

## Solution

```typescript
function removeElement(nums: number[], val: number): number {
  let j = 0
  for (let n of nums) {
    if (n !== val) {
      nums[j] = n
      j++
    }
  }
  return j
};

// Input array
let nums = [1,2,5,6,6,7];
// Value to remove
const val = 6;
// The expected answer with correct length.
// It is sorted with no values equaling val.
const expectedNums = [1,2,5,7]; 

const k = removeElement(nums, val); // Calls your implementation

if (k !== expectedNums.length) {
  throw new Error("returned value of removeElement does not match the length of expectedNums array")
}

// Copy the first k elements into a new array
let sortedArr = nums.slice(0, k);

// Sort the new array
sortedArr.sort((a, b) => a - b);

// Combine the sorted subarray with the remaining elements
nums = sortedArr.concat(nums.slice(k));

for (let i = 0; i < k; i++) {
  if (nums[i] !== expectedNums[i]) {
    throw new Error(`element mismatch at index = ${i}`)
  }
}

console.log(nums.slice(0,k))
```

## Approach

iterates over the array, moving all elements not equal to `val` to the front, and then returns the new length of the array.

## Complexity Analysis

* Time complexity:`O(n)`
* Space complexity: `O(1)`
