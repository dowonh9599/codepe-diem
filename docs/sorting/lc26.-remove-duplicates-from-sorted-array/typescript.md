# Typescript

## Solution

```typescript
import { sys } from "typescript";

function removeDuplicates(nums: number[]) {
  let index = 0;
  for (let i = 0; i < nums.length; ++i) {
    if (nums[i] == nums[index]) {
      continue;
    } else {
      index++;
      nums[index] = nums[i]
    }
  } 
 return index + 1;
}

let nums = [0,0,1,1,1,2,2,3,3,4]; // Input array
const expectedNums = [0,1,2,3,4] // The expected answer with correct length

const k = removeDuplicates(nums); // Calls your implementation

if (k != expectedNums.length) {
  console.error("returned value of removeDuplicates does not match the length of expectedNums array");
  sys.exit(0)
}


for (let i = 0; i < k; i++) {
  if (nums[i] != expectedNums[i]) {
    console.error(`element mismatch at index = ${i}`);
    sys.exit(0)
  }
}

console.log(nums.slice(0,k))
```

## Approach

the code iterates through the array, comparing each element with the element at the current index. If they are the same, it continues to the next iteration. If they are different, it increments the index and assigns the value of the current element to the new position. Finally, it returns the updated index + 1 as the count of unique elements in the array.

## Complexity Analysis

* Time complexity:`O(n)`
* Space complexity: `O(1)`
