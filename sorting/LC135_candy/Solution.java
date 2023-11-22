package sorting.LC135_candy;

import java.util.Arrays;

public class Solution {
  public int candy(int[] ratings) {
    int n = ratings.length;
    int[] pref = new int[n];
    int[] suff = new int[n];
    Arrays.fill(pref, 1);
    Arrays.fill(suff, 1);
    for(int i = 1; i < n; i++){
        if(ratings[i] > ratings[i - 1]) pref[i] = 1 + pref[i - 1];
    }
    for(int i = n - 2; i >= 0; i--){
        if(ratings[i] > ratings[i + 1]) suff[i] = 1 + suff[i + 1];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) ans += Math.max(pref[i], suff[i]);
    return ans;
  }

  public static void main(String[] args) {
    int[] ratings = new int[]{1,0,2};
    Solution s = new Solution();
    System.out.println(s.candy(ratings));
  }
}
