# LC27. Remove Element

## Problem Description

Given an integer array `nums` and an integer `val`, your task is to remove all occurrences of `val` in `nums` in-place. The order of the elements may be changed. You should then return the number of elements in `nums` which are not equal to `val`.

The number of elements in `nums` which are not equal to `val` is considered to be `k`. To solve this problem, you need to do the following:

1. Modify the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`. The remaining elements of `nums` are not important, nor is the size of `nums`.

2. Return `k`.

### Custom Judge

The custom judge will test your solution with the following code:

```java
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length, sorted with no values equaling `val`.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first `k` elements of `nums`
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

**Example 1**
`Input`: nums = [3,2,2,3], val = 3

`Output`: 2, nums = [2,2,_,_]

Explanation: Your function should return k = 2, with the first two elements of nums being 2. It does not matter what you leave beyond the returned k (hence they are underscores).

**Example 2**
`Input`: nums = [0,1,2,2,3,0,4,2], val = 2

`Output`: 5, nums = [0,1,4,0,3,_,_,_]

Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4. Note that these five elements can be returned in any order. It does not matter what you leave beyond the returned k (hence they are underscores).

**Constraints**
0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100