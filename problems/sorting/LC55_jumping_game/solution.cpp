#include <iostream>
#include <vector>

class Solution {
public:
  bool canJump(std::vector<int>& nums) {
    int last_pos =  nums.size() - 1;

    for (int i =  nums.size() - 1; i > -1; i--) {
      if (nums[i] + i >= last_pos) {
        last_pos = i;
      }
    }

    if (last_pos == 0) {
      return true;
    }
    
    return false;
  }
};

int main() {
  std::vector<int> nums1 = {2,3,1,1,4};
  Solution s;
  bool output1 = s.canJump(nums1);
  std::cout << output1 << std::endl;

  std::vector<int> nums2 = {3,2,1,0,4};
  bool output2 = s.canJump(nums2);
  std::cout << output2 << std::endl;
}
