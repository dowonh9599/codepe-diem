package sorting.LC26_remove_duplicates;

public class Solution {
  public int removeDuplicates(int[] nums) {
    int index = 0;
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == nums[index]) {
        continue;
      } else {
        index++;
        nums[index] = nums[i];
      }
    }
    return index + 1;
  }

  public static void main(String[] args) {
    int[] nums = new int[]{0,0,1,1,1,2,2,3,3,4}; // Input array
    int[] expectedNums = new int[]{0,1,2,3,4}; // The expected answer with correct length

    Solution s = new Solution();
    int k = s.removeDuplicates(nums); // Calls your implementation

    if (k != expectedNums.length) {
        System.err.println("returned value of removeDuplicates does not match the length of expectedNums array");
        return;
    }

    for (int i = 0; i < k; i++) {
        if (nums[i] != expectedNums[i]) {
            System.err.println("element mismatch at index = " + String.valueOf(i));
            return;
        } else {
            System.out.print(nums[i] + " ");
        }
    }
  }
}
