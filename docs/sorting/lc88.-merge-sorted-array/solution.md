# Solution

## Implementation

```cpp
// C++ solution
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for (int j = 0, i = m; j<n; j++){
                nums1[i] = nums2[j];
                i++;
            }
            sort(nums1.begin(),nums1.end());
        }
};
```

```go
// Go
func merge(nums1 []int, m int, nums2 []int, n int)  {
    nums1 = append(nums1[:m], nums2[:n]...)
    sort.Ints(nums1)
}

```

```java
// Java
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        for (int j = 0, i = m; j < n; j++) {
            nums1[i] = nums2[j];
            i++;
        }
        Arrays.sort(nums1);
    }
}
```

```python
# Python
class Solution(object):
    def merge(self, nums1, m, nums2, n):
      for j in range(n):
          nums1[m+j] = nums2[j]
      nums1.sort()
```

## Approach

This implementation merges the two sorted arrays `nums1` and `nums2` by appending the elements of `nums2` to the end of `nums1`, and then sorting the combined array `nums1` to ensure it is in ascending order.

## Complexity <a href="#complexity" id="complexity"></a>

* Time complexity: O((m+n)log(m+n))
  * _due to the sort() function_
* Space complexity: O(1)
  * _We are not using any extra space, so the space complexity is O(1)._

