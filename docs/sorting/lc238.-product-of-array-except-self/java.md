# Java

## Solution

```java
package sorting.LC238_product_of_array_except_self;

public class Solution {
  public int[] productExceptSelf(int[] nums) {
    int[] output = new int[nums.length];
    output[0] = 1;
    for (int i = 1; i < nums.length; i++) {
        output[i] = output[i-1] * nums[i-1];
    }
    int right = 1;
    for (int i = nums.length - 1; i >= 0; i--) {
        output[i] *= right;
        right *= nums[i];
    }
    return output;
  }

  public static void main(String[] args) {
    int[] nums = new int[]{1,2,3,4};

    Solution s = new Solution();
    int[] output = s.productExceptSelf(nums);
    for (int o: output) {
      System.out.print(o + " ");
    }
  }
  
}
```

## Approach

The function `productExceptSelf` takes an array of numbers as input and returns an array where each element is the product of all other elements in the input array. The function achieves this in two passes using an auxiliary output array.

In the first pass, we iterate from the left side of the array and calculate the cumulative product of all numbers to the left of the current element, storing these in the output array. The first element has no numbers to the left, so we initialize it as `1`.

In the second pass, we iterate from the right side of the array and maintain a `right` variable to hold the cumulative product of all numbers to the right of the current element. We then multiply the current value in the output array (which is the product of all numbers to the left) by this `right` variable. This gives us the product of all numbers except the current one.

## Complexity Analysis

Time Complexity: `O(n)`

* `n` is the length of the input array. The function performs two passes over the array, but each pass takes constant time per element, so the overall time complexity is linear.

Space Complexity: `O(n)`

* `n` is the length of the input array. This is because we create an output array of the same length as the input array to store our intermediate and final results. Apart from the output array, we only use a few variables that take constant space.
