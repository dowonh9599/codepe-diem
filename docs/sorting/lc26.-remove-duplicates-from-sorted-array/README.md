# LC26. Remove Duplicates from Sorted Array

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates [**in-place**](https://en.wikipedia.org/wiki/In-place\_algorithm) such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**. Then return _the number of unique elements in_ `nums`.

Consider the number of unique elements of `nums` to be `k`, to get accepted, you need to do the following things:

* Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.
* Return `k`.

**Custom Judge:**

The judge will test your solution with the following code:

```
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be **accepted**.

&#x20;

**Example 1:**

<pre><code><strong>Input: nums = [1,1,2]
</strong><strong>Output: 2, nums = [1,2,_]
</strong><strong>Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
</strong>It does not matter what you leave beyond the returned k (hence they are underscores).
</code></pre>

**Example 2:**

<pre><code><strong>Input: nums = [0,0,1,1,1,2,2,3,3,4]
</strong><strong>Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
</strong><strong>Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
</strong>It does not matter what you leave beyond the returned k (hence they are underscores).
</code></pre>

&#x20;

**Constraints:**

* `1 <= nums.length <= 3 * 104`
* `-100 <= nums[i] <= 100`
* `nums` is sorted in **non-decreasing** order.
