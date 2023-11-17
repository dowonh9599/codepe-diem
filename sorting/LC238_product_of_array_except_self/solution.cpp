#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> output(nums.size());
        output[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};

int main() {
    Solution s = Solution();
    std::vector<int> nums = {1,2,3,4};
    std::vector<int> output = s.productExceptSelf(nums);
    
    for (int o : output) {
        std::cout << o << " ";
    }
}