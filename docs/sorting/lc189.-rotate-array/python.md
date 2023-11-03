# Python

## Solution

```python
class Solution:
  def rotate(self, nums: [int], k: int) -> None:
    nums[:] = nums[-k:] + nums[:-k]

nums = [1,2,3,4,5,6,7]
k = 3
s = Solution()
s.rotate(nums, k)
for num in nums:
  print(num, end=" ")
```

## Approach

rotates an array to the right by `k` steps. It uses slicing and concatenation operations to achieve this. Here's how it works:

1. `nums[-k:]`: This gets the last `k` elements of the array. Since Python's list indexing allows for negative values to count from the end, `-k` refers to the `k`th last element of the `nums` list.
2. `nums[:-k]`: This gets all elements of the array except for the last `k` elements.
3. `nums[:] = nums[-k:] + nums[:-k]`: This line concatenates the last `k` elements (which become the first `k` elements after rotation) and the first `n-k` elements (which move to the end after rotation), and assigns the result back to the `nums` array. The `nums[:]` is used to modify the existing list rather than creating a new one.

## Complexity Analysis

Time Complexity: `O(n)`, where `n` is the length of the array.

* slicing an array takes O(n) time and it's done twice in this code, and list concatenation operation also takes O(n) time.

Space Complexity: `O(n)`&#x20;

* the slicing operation creates new lists and concatenating them together creates another new list. All of these operations require additional space that scales with the size of the input array.
