# Typescript

## Solution

```typescript
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
```

## Approach

this rotates an array to the right by `k` steps. The `rotate` function takes an array of numbers (`nums`) and a number `k` as parameters. The function first reduces `k` by taking the modulus of the array's length to handle cases where `k` is greater than the length of the array.

The function then calls the `reverseArr` function three times to:

1. Reverse the entire array.
2. Reverse the first `k` elements of the reversed array.
3. Reverse the remaining elements from `k` to the end of the array.

The `reverseArr` function takes an array and two indices (`l` and `r`) and reverses the elements between these indices in-place. It then returns the modified array.

This approach is based on the fact that when you rotate an array to the right by `k` steps, the last `k` elements move to the beginning of the array and the first `n-k` elements move to the end of the array, but their relative order gets reversed. So, by reversing segments of the array and then the entire array, you can achieve the same result as rotating it.

## Complexity Analysis

Time Complexity: **O(n)**, where `n` is the length of the array.

* This is because each element in the array gets visited a constant number of times (specifically, three times).

Space Complexity: **O(1)**.

* This only uses a constant amount of space to store the array length, the indices for the reverse operation, and a temporary variable for swapping elements. The reversal is done in place, which means it doesn't require any additional space that scales with the size of the input array.
