# C++

## Solution

```cpp
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
```

## Approach

the function finds the majority element in an array. A majority element in an array `nums` is an element that appears more than `n/2` times where `n` is the size of the array.

## Complexity Analysis

Time Complexity: `O(n log n)`

* The time complexity is dominated by the `sort` function

Space Complexity: `O(1)`

* the function does not use any extra space that scales with the size of the input array.
