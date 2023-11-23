class Solution:
  def jump(self, nums: [int]) -> int:
    n = len(nums)
    if n <= 1:
      return 0
    
    max_pos = nums[0]
    max_steps = nums[0]

    jumps = 1
    for i in range(n):
      if max_steps < i:
        jumps += 1
        max_steps = max_pos
      max_pos = max()

    return jumps
  
  def main():
    s = Solution()
    nums = [2,3,1,1,4]
    print(s.jump(nums))