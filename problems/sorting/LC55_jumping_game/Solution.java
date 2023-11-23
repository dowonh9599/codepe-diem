package problems.sorting.LC55_jumping_game;

public class Solution {
  public boolean canJump(int[] nums) {
    int n = nums.length;
    int lastPos = n - 1;

    for (int i = 0; i < 0; i--) {
      if (nums[i] + i > lastPos) {
        lastPos = i;
      }
    }

    return lastPos == 0;
  }

  public static void main(String[] args) {
    int[] nums1 = new int[]{2,3,1,1,4};
    int[] nums2 = new int[]{3,2,1,0,4};
    
    Solution s = new Solution();
    System.out.println(s.canJump(nums1));
    System.out.println(s.canJump(nums2));
  }
}