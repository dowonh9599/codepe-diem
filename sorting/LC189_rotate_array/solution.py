class Solution:
  def rotate(self, nums: [int], k: int) -> None:
    nums[:] = nums[-k:] + nums[:k]

nums = [1,2,3,4,5,6,7]
k = 3
s = Solution()
s.rotate(nums, k)
for num in nums:
  print(num, end=" ")