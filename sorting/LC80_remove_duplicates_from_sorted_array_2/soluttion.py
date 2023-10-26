class Solution:
  def removeDuplicates(self, nums: [int]) -> int:
    nums[:] = sorted(set(nums))
    return len(nums)
    
def main():
  nums = [0,0,1,1,1,2,2,3,3,4]
  expectedNums = [0,1,2,3,4]
  
  s = Solution()
  s.removeDuplicates(nums)

  if nums != expectedNums:
    raise("element mismatch")
  else:
    print("successfully removed duplicates, nums:", nums)


main()