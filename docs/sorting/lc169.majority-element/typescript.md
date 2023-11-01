# Typescript

## Solution

```typescript
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
```

## Approach

the function finds the majority element in an array. A majority element in an array `nums` is an element that appears more than `n/2` times where `n` is the size of the array.

## Complexity Analysis

Time Complexity: `O(n log n)`

* The time complexity is dominated by the `sort` function

Space Complexity: `O(1)`

* the function does not use any extra space that scales with the size of the input array.
