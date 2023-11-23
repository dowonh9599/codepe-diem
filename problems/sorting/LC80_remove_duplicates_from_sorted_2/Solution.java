package problems.sorting.LC80_remove_duplicates_from_sorted_2;

public class Solution {
  public int removeDuplicates1(int[] nums) {
    int k = 0, i = 0;
    while(i < nums.length){
      int curr = nums[i];
      int cnt = 0;
      while(i< nums.length && nums[i] == curr) {
        cnt++;
        i++;
      }
      if(cnt > 1) {
        nums[k] = curr;
        k++;
        nums[k] = curr;
        k++;
      }
      else {
        nums[k] = curr;
        k++;
      }
    }
    return k;
  }

  public int removeDuplicates2(int[] nums) {
    int i = 0;
    // int ele= nums[0];
    for (int ele : nums)
    {
      if(i == 0 || i == 1 || nums[i - 2] != ele)
      {
        nums[i] = ele;
        i++;
      }
    }
    return i;
  }

  public static void main(String[] args) {
    int[] nums = new int[]{0,0,1,1,1,1,2,3,3}; // Input array
    int[] expectedNums = new int[]{0,0,1,1,2,3,3}; // The expected answer with correct length
    
    Solution s = new Solution();
    int k = s.removeDuplicates1(nums); // Calls your implementation
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
};

