class Solution(object):
  def productExceptSelf(self, nums):
    output = [1]
    for i in range(1, len(nums)):
      output.append(output[i-1] * nums[i-1])
    right = 1
    for i in range(len(nums)-1, -1, -1):
      output[i] *= right
      right *= nums[i]
    return output
  
def main():
  nums = [1,2,3,4]
  s = Solution()
  output = s.productExceptSelf(nums)
  print(output)

main()