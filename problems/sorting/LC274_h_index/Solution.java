package problems.sorting.LC274_h_index;

import java.util.Arrays;

public class Solution {
  public int hIndex(int[] citations) {
    Arrays.sort(citations);

    int h = citations.length;

    for (int i = 0; i < citations.length; i++) {
      if (citations[i] >= h) {
        return h;
      } else {
        if (h == 1 && citations[i] != 0) {
          return 1;
        }
        h--;
      }
    }
    return h;
  }

  public static void main(String[] args) {
    int[] citations = new int[]{3,0,6,1,5};
    Solution s = new Solution();
    System.out.println(s.hIndex(citations));
  }
}
