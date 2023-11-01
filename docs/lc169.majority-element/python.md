# Python

## Solution

```python
def majorityElement(nums):
    nums.sort()
    n = len(nums)
    return nums[n // 2]

nums = [2, 2, 1, 1, 1, 2, 2]
majority_num = majorityElement(nums)
print("majority:", majority_num)
```

## Approach

the function finds the majority element in an array. A majority element in an array `nums` is an element that appears more than `n/2` times where `n` is the size of the array.

## Complexity Analysis

Time Complexity: `O(n log n)`

* The time complexity is dominated by the `sort` function

Space Complexity: `O(1)`

* the function does not use any extra space that scales with the size of the input array.
