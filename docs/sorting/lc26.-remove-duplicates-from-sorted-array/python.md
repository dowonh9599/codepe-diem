# Python

## Solution

```python
class Solution:
    def removeDuplicates(self, nums) -> int:
        nums[:] = sorted(set(nums))
        return len(nums)

def main():
  nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
  expectedNums = [0, 1, 2, 3, 4]

  s = Solution()
  s.removeDuplicates(nums)

  if nums != expectedNums:
    raise("element mismatch")
  else:
    print("successfully removed duplicates, nums:", nums)

main()
```

## Approach

The `removeDuplicates` method takes a list of numbers `nums` as input. It converts the list into a set to remove duplicates, sorts the set, and assigns the sorted set back to the original list. Finally, it returns the length of the modified list, which represents the count of unique elements in the original list.

## Complexity Analysis

* Time complexity:`O(n log n)`
* Space complexity: `O(n)`
