# C++

## Solution

```cpp
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
```

## Approach

**Solution 1**

This solution uses the `std::reverse` function to reverse the order of elements in the vector. It performs three reversals to achieve the desired rotation. Here's a breakdown of the steps:

1. `std::reverse(nums.end() - k, nums.end())`: This reverses the last `k` elements of the vector.
2. `std::reverse(nums.begin(), nums.end() - k)`: This reverses the first `nums.size() - k` elements of the vector.
3. `std::reverse(nums.begin(), nums.end())`: This reverses the entire vector, effectively rotating the elements by `k` positions.

**Solution 2**

This solution uses a different approach to achieve the rotation. Here's an overview of the steps:

1. If the size of the vector is 1, the function returns as there is no need to rotate a single element.
2. The `while` loop reduces the value of `k` if it is greater than the size of the vector, ensuring that `k` is within the valid range.
3. The `for` loop iterates over the first `nums.size() - k` elements of the vector and appends each element to the end of the vector.
4. Finally, the `nums.erase` function is used to remove the first `nums.size() - k` elements from the vector, effectively performing the rotation.

## Complexity Analysis

**Solution 1**

Time Complexity: `O(n)`

* n is the size of the vector. The `for` loop iterates over `nums.size() - k` elements, resulting in a linear time complexity.

Space Complexity: `O(1)`

* It uses a constant amount of extra space. The rotations are performed in-place, without requiring additional memory. However, note that the `nums.push_back` and `nums.erase` operations internally manage the memory of the vector but don't result in any additional space complexity.
