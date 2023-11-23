package problems.sorting.LC169_majority_elements;
import java.util.Arrays;

public class Solution {
  int majorityElement(int[] nums) {
    Arrays.sort(nums);
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
