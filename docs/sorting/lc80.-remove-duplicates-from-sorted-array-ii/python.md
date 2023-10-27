# Python

## Solution

```python
class Solution:
  def remove_duplicates1(self, nums: [int]) -> int:
    k = 0
    i = 0
    while i < len(nums):
        curr = nums[i]
        cnt = 0
        while i < len(nums) and nums[i] == curr:
            cnt += 1
            i += 1
        if cnt > 1:
            nums[k] = curr
            k += 1
            nums[k] = curr
            k += 1
        else:
            nums[k] = curr
            k += 1
    return k
  
  def remove_duplicates2(self, nums: [int]) -> int:
      index = 0
      i = 0
      while i < len(nums):
          if index == 0 or index == 1 or nums[index-2] != nums[i]:
              nums[index] = nums[i]
              index += 1
          i += 1
      return index
  
def main():
  nums = [0,0,1,1,1,2,2,3,3,4]
  expectedNums = [0,1,2,3,4]
  
  s = Solution()
  s.remove_duplicates1(nums)

  if nums != expectedNums:
    raise("element mismatch")
  else:
    print("successfully removed duplicates, nums:", nums)


main()
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
