def majorityElement(nums):
    nums.sort()
    n = len(nums)
    return nums[n // 2]

nums = [2, 2, 1, 1, 1, 2, 2]
majority_num = majorityElement(nums)
print("majority:", majority_num)