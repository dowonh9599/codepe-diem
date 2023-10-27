# Java

## Solution

```java
// time-complexity wise efficient
class Solution {
    public int removeDuplicates1(int[] nums) {
        int k = 0, i = 0;
        while(i < nums.length){
            int curr = nums[i];
            int cnt = 0;
            while(i< nums.length && nums[i] == curr) {
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

    public int removeDuplicates2(int[] nums) {
        int i = 0;
        // int ele= nums[0];
        for (int ele : nums)
        {
            if(i == 0 || i == 1 || nums[i - 2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
        return i;
    }

    public static void main(String[] args) {
        int[] nums = new int[]{0,0,1,1,1,1,2,3,3}; // Input array
        int[] expectedNums = new int[]{0,0,1,1,2,3,3}; // The expected answer with correct length
        
        Solution s = new Solution();
        int k = s.removeDuplicates1(nums); // Calls your implementation
        if (k != expectedNums.length) {
            System.err.println("returned value of removeDuplicates does not match the length of expectedNums array");
            return;
        }

        for (int i = 0; i < k; i++) {
            if (nums[i] != expectedNums[i]) {
                System.err.println("element mismatch at index = " + String.valueOf(i));
                return;
            } else {
                System.out.print(nums[i] + " ");
            }
        }
    }
};

```

## Approach

**Solution 1**

This function uses a two-pointer technique. The `i` pointer scans through the original array, and `k` keeps track of the position in the modified array.

**Solution 2**

This function also uses a two-pointer approach where `i` keeps track of the position in the modified array and `ele` iterates through each element in the original array using an enhanced `for` loop.

The function checks three conditions for each element `ele` in the array:

1. If `i` is 0, which means it's the first element in the array.
2. If `i` is 1, which means it's the second element in the array.
3. If the current element `ele` is not equal to the element two positions before in the modified array (`nums[i - 2]`).

## Complexity Analysis

* Time Complexity: `O(n)`, both functions modify the array in place, meaning they do not use any additional space proportion to the size of the input.
* Space Complexity: `O(1)`, The extra space used is constant, for variables like `i`, `k`, `cnt`, `curr`, and `ele`. Therefore, the space complexity for both functions is O(1).
