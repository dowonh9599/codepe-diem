# C++

## Solution

```cpp
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

```

## Approach

This solution works as follows:

1. **Check if we need to jump**: If the array contains one or fewer elements, we don't need to jump, so we return 0.
2. **Initialize variables**: `maxPos` tracks the farthest reachable index, `maxSteps` tracks the maximum number of steps we can take from the current index, and `jumps` counts the number of jumps.
3. **Iterate through the array**: For each position, we update `maxPos` with the maximum of `maxPos` and `nums[i] + i`, which represents the farthest index we can reach from the current index. If we reach a position that is beyond `maxSteps`, we increment `jumps` and update `maxSteps` to `maxPos`, as we must make a jump here to continue.
4. **Return the number of jumps**: After iterating through the array, we return `jumps`, which is the minimum number of jumps to reach the last index.

This solution works because it iteratively checks each position and updates the farthest reachable position and the maximum number of steps left. If we reach a position where we must jump to continue (i.e., we've used up all the steps from the previous jump), we increment the jump count. This ensures that we always make a jump when necessary and that we take the farthest jump possible to minimize the total number of jumps.

## Complexity Analysis

This solution uses the greedy approach to solve the problem.

&#x20;It makes a single pass through the array, updating `jumps`, `maxSteps`, and `maxPos` as it goes, thus only needing constant space and linear time. The greedy approach ensures that the function always takes the optimal step at each stage (choosing the farthest jump that can be made from the current position), which allows it to find the minimum number of jumps in just one pass through the array.

**Time Complexity**:  `O(n)`

* the function iterates through the array exactly once. Each operation inside the loop (comparing and assigning values) takes constant time, so the overall time complexity is linear.

**Space Complexity**: `O(1)`

* the function only uses a fixed amount of space to store the variables `n`, `maxPos`, `maxSteps`, and `jumps`. The space used does not change with the size of the input array, so the space complexity is constant.
