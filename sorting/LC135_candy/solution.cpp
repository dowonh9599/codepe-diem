#include <iostream>
#include <vector>

class Solution {
public:
  int candy(std::vector<int>& ratings) {
        int n = ratings.size();
        std::vector<int>pref(n , 1);
        std::vector<int>suff(n , 1);
        for(int i = 1;i<n; i++){
            if(ratings[i]>ratings[i-1]) pref[i] = 1 + pref[i-1];
        }
        for(int i = n-2;i>=0; i--){
            if(ratings[i]>ratings[i+1]) suff[i] = 1 + suff[i+1];
        }

        int ans = 0;
        for(int i=0;i<n; i++) ans += std::max(pref[i] , suff[i]);
        return ans;
    }
};
int main() {
    std::vector<int> ratings = {1,0,2};
    
    Solution s = Solution();
    std::cout << s.candy(ratings) << std::endl;
    
}
