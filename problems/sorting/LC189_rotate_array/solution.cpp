#include <iostream>
#include <vector>
#include <algorithm>

// space-efficient
class Solution1 {
public:
  void rotate(std::vector<int>& nums, int k) {
    std::reverse(nums.end() - k, nums.end());
    std::reverse(nums.begin(), nums.end() - k);
    std::reverse(nums.begin(), nums.end());
  }
};

// time-efficient
class Solution2 {
public:
  void rotate(std::vector<int>& nums, int k) {
    if (nums.size() == 1) {
      return;
    }
    while (k > nums.size()) {
      k -= nums.size();
    }
    for (int i = 0; i < nums.size() - k; i++) {
      nums.push_back(nums[i]);
    }
    nums.erase(nums.begin() + 0,nums.begin() + nums.size() - k);
  }
};

int main() {
  std::vector<int> nums = {1,2,3,4,5,6,7};
  int k = 3;
  Solution1 s;
  s.rotate(nums, k);
  for (int num: nums) {
    std::cout << num << std::endl;
  }
}
