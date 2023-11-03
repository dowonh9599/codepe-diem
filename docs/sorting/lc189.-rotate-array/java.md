# Java

## Solution

```java
package sorting.LC189_rotate_array;

public class Solution {
  public void rotate(int[] nums, int k) {
    int n = nums.length;
    reverse(nums, n-k, n-1);
    reverse(nums, 0, n-k-1);
    reverse(nums, 0, n-1);
  }

  private void reverse(int[] nums, int start, int end) {
    while(start < end) {
      int temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
    }
  }

  public static void main(String[] args) {
    int[] nums = new int[]{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    
    Solution s = new Solution();
    s.rotate(nums, k);
    for (int num: nums) {
      System.out.print(num + " ");
    }
  }
}
```

## Approach

The `rotate` function takes an array of integers (`nums`) and an integer `k` as arguments. It first calculates the length of the array (`n`). It then calls the `reverse` function three times with different parameters:

1. `reverse(nums, n-k, n-1)`: This reverses the last `k` elements in the array.
2. `reverse(nums, 0, n-k-1)`: This reverses the first `n-k` elements in the array.
3. `reverse(nums, 0, n-1)`: This reverses the entire array.

The `reverse` function takes an array, and start and end indices as arguments. It then swaps the elements at the start and end indices, and increments the start index and decrements the end index until they meet in the middle. This effectively reverses the portion of the array between the start and end indices.

This approach is based on the fact that when you rotate an array to the right by `k` steps, the last `k` elements move to the beginning of the array and the first `n-k` elements move to the end of the array, but their relative order gets reversed. So, by reversing segments of the array and then the entire array, you can achieve the same result as rotating it.

## Complexity Analysis

Time Complexity: `O(n)`, where `n` is the length of the array.&#x20;

* each element in the array gets visited a constant number of times (specifically, three times).

The space complexity: `O(1)`

* This only uses a constant amount of space to store the array length and indices for the reverse operation. The reversal is done in place, which means it doesn't require any additional space that scales with the size of the input array.
