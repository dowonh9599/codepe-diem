# Java

## Solution

<pre class="language-java"><code class="lang-java">package sorting.LC169_majority_elements;
import java.util.Arrays;

public class Solution {
<strong>  int majorityElement(int[] nums) {
</strong>    Arrays.sort(nums);
    int n = nums.length;
    return nums[n/2];
  }

  public static void main(String[] args) {
    int[] nums = new int[]{2,2,1,1,1,2,2};
    Solution s = new Solution();
    int majorityNum = s.majorityElement(nums);
    System.out.println("majority: " + majorityNum);
  }
}
</code></pre>

## Approach

the function finds the majority element in an array. A majority element in an array `nums` is an element that appears more than `n/2` times where `n` is the size of the array.

## Complexity Analysis

Time Complexity: `O(n log n)`

* The time complexity is dominated by the `sort` function

Space Complexity: `O(1)`

* the function does not use any extra space that scales with the size of the input array.
