# Java

## Implementation

```java
// Java
import java.util.Arrays;

class Solution {
  public int[] merge(int[] nums1, int m, int[] nums2, int n) {
    System.arraycopy(nums2, 0, nums1, m, n);
    Arrays.sort(nums1);
    return nums1;
}
  public static void main(String args[]) {
    Solution s = new Solution();
    int[] nums1 = new int[] { 1, 2, 3, 0, 0, 0 };
    int m = 3;
    int[] nums2 = new int[] { 2, 5, 6 };
    int n = 3;
    System.out.println(Arrays.toString(s.merge(nums1, m, nums2, n)));
  }
}
```

## Approach <a href="#complexity" id="complexity"></a>

first uses the `System.arraycopy` function to copy the valid elements from `nums2` into `nums1`, starting at index `m` in `nums1`. This overwrites the extra space at the end of `nums1` with the values from `nums2`. Then it sorts the combined array in-place using the `Arrays.sort` function.

## Complexity <a href="#complexity" id="complexity"></a>

* Time complexity: O((m+n)log(m+n))
  * _due to the sort() function_
* Space complexity: O(1)
  * _We are not using any extra space, so the space complexity is O(1)._

