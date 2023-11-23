#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main() {
    std::vector<int> nums = {1,2,5,6,6,7}; // Input array
    int val = 6; // Value to remove
    std::vector<int> expectedNums = {1,2,5,7}; // The expected answer with correct length.
                              // It is sorted with no values equaling val.

    Solution s;
    int k = s.removeElement(nums, val); // Calls your implementation

    if (k != expectedNums.size()) {
        throw std::runtime_error("returned value of removeElement does not match the length of expectedNums array");
    }
    
    std::sort(nums.begin(), nums.begin() + k);
    
    for (int i = 0; i < expectedNums.size(); i++) {
        if (nums[i] != expectedNums[i]) {
            std::string msg = "element mismatch at index = " + std::to_string(i);
            throw std::runtime_error(msg);
        }

        std::cout << nums[i] << " ";
    }
}
