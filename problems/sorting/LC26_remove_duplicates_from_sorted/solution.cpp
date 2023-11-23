#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int index = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[index]) {
                continue;
            }
            else {
                index++;
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }
};

int main() {
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; // Input array
    std::vector<int> expectedNums = {0,1,2,3,4}; // The expected answer with correct length

    Solution s;
    int k = s.removeDuplicates(nums); // Calls your implementation

    if (k != expectedNums.size()) {
        std::cerr << "returned value of removeDuplicates does not match the length of expectedNums array" << std::endl;
        return 0;
    }


    for (int i = 0; i < k; i++) {
        if (nums[i] != expectedNums[i]) {
            std::cerr << "element mismatch at index = " << i << std::endl;
        } else {
            std::cout << nums[i] << " ";
        }
    }

}
