#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  int majorityElement(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n/2];
  }
};

int main() {
  Solution s = Solution();
  std::vector<int> nums = {2,2,1,1,1,2,2};
    std::cout << s.majorityElement(nums) << std::endl;
}