# C++

## Solution

```cpp
#include <iostream>
#include <vector>

// time-complexity wise efficient
class Solution1 {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0, i = 0;
        while(i < nums.size()) {
            int curr = nums[i];
            int cnt = 0;
            while(i< nums.size() && nums[i] == curr) {
                cnt++;
                i++;
            }
            if(cnt > 1) {
                nums[k] = curr;
                k++;
                nums[k] = curr;
                k++;
            }
            else {
                nums[k] = curr;
                k++;
            }
        }
        return k;
    }
};

// O(n) time complexity solution
class Solution2 {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int i = 0;
        // int ele= nums[0];
        for (auto ele : nums)
        {
            if(i == 0 || i == 1 || nums[i - 2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
        return i;
    }
};

int main() {
    std::vector<int> nums = {0,0,1,1,1,1,2,3,3}; // Input array
    std::vector<int> expectedNums = {0,0,1,1,2,3,3}; // The expected answer with correct length

    Solution1 s;
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

```

