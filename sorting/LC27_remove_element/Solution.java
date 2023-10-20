package sorting.LC27_remove_element;
import java.util.Arrays;

public class Solution {
  public int removeElement(int[] nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.length; j++) {
      if (nums[j] != val) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
      }
    }
    return i;
  }

  public static void main (String[] args) throws RuntimeException {
    int[] nums = new int[]{1,2,5,6,6,7}; // Input array
    int val = 6; // Value to remove

    // The expected answer with correct length.
    // It is sorted with no values equaling val.
    int[] expectedNums = {1,2,5,7}; 

    Solution s = new Solution();
                              
    int k = s.removeElement(nums, val); // Calls your implementation
    
    if (k != expectedNums.length) {
      throw new RuntimeException("returned value of removeElement does not match the length of expectedNums array");
    }
    Arrays.sort(nums, 0, k); // Sort the first k elements of nums
    for (int i = 0; i < k; i++) {
      if (nums[i] != expectedNums[i]) {
        String msg = "element mismatch at index = " + String.valueOf(i);
        throw new RuntimeException(msg);
      }
    }
    System.out.println(Arrays.toString(Arrays.copyOfRange(nums, 0, k)));
  }
}