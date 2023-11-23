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
