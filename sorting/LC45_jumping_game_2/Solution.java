package sorting.LC45_jumping_game_2;

public class Solution {
  public int jump(int[] nums) {
    int n = nums.length;
    if (n <= 1) {
      return 0;
    }

    int maxPos = nums[0];
    int maxSteps = nums[0];

    int jumps = 1;
    for (int i = 1; i < n; i++) {
      if (maxSteps < i) {
        jumps++;
        maxSteps = nums[i] + i;
      }
      maxPos = Math.max(maxPos, nums[i] + i);

    }

    return jumps;
  }

  public static void main(String[] args) {
    Solution s = new Solution();
    int[] nums = new int[]{2,3,1,1,4};
    System.out.println(s.jump(nums));
  }
}
