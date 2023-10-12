# Python

## Implementation

```python
# Python
class Solution:
  def merge(self, nums1, m, nums2, n):
    nums1[m:m+n] = nums2
    nums1.sort()
    return nums1

s = Solution()
nums1 = [1, 2, 3, 0, 0, 0]
m = 3
nums2 = [2, 5, 6]
n = 3

merged = s.merge(nums1, m, nums2, n)
print(merged)
```

## Approach <a href="#complexity" id="complexity"></a>

first uses slice assignment to replace the elements in `nums1` starting at index `m` with the valid elements from `nums2` (`nums1[m:m+n] = nums2[:n]`). This effectively replaces the extra space at the end of `nums1` with the values from `nums2`. Then it sorts the combined array in-place using the `sort` method.

## Complexity <a href="#complexity" id="complexity"></a>

* Time complexity: O((m+n)log(m+n))
  * _due to the sort() function_
* Space complexity: O(1)
  * _We are not using any extra space, so the space complexity is O(1)._

