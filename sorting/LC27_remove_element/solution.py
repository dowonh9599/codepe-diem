class Solution:
  def removeElement(self, nums, val):
    nums[:] = [num for num in nums if num != val]

def main():
  nums = [1,2,5,6,6,7] # Input array
  val = 6 # Value to remove

  # The expected answer with correct length.
  # It is sorted with no values equaling val.
  expectedNums = [1,2,5,7]
  s = Solution()
  s.removeElement(nums, val) # Calls your implementation

  if nums == expectedNums:
    print("element removed successfully")
    print("your solution:", nums)
  else:
    print("something went wrong")
    print("expectedNums:", expectedNums)
    print("your solution:", nums)

main()