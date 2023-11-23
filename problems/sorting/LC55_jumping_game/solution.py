def canJump(nums: [int]) -> bool:
    n = len(nums)
    last_pos = n - 1

    for i in range(n - 1, -1, -1):
        if nums[i] + i >= last_pos:
            last_pos = i

    return last_pos == 0

print(canJump([2,3,1,1,4]))  # output: True
print(canJump([3,2,1,0,4]))  # output: False