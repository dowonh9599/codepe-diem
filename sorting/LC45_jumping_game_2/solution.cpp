#include <iostream>
#include <algorithm>

class Solution {
public:
    int jump(std::vector<int>& nums) {
        int n = nums.size();
        // if the length of array is 1, no need to jump at all.
        if (n <= 1) {
            return 0;
        }

        int maxPos = nums[0];
        int maxSteps = nums[0];

        int jumps = 1;
        for (int i = 1; i < n; ++i) {
            if (maxSteps < i) {
                jumps++;
                maxSteps = maxPos;
            }
            maxPos = std::max(maxPos, nums[i] + i);
        }

        return jumps;
    }
};

int main() {
    Solution s;
    std::vector<int> nums = {2,3,1,1,4};
    std::cout << s.jump(nums) << std::endl;
}
