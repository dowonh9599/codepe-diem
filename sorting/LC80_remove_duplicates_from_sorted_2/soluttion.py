class Solution:
  def remove_duplicates1(self, nums: [int]) -> int:
    k = 0
    i = 0
    while i < len(nums):
        curr = nums[i]
        cnt = 0
        while i < len(nums) and nums[i] == curr:
            cnt += 1
            i += 1
        if cnt > 1:
            nums[k] = curr
            k += 1
            nums[k] = curr
            k += 1
        else:
            nums[k] = curr
            k += 1
    return k
  
  def remove_duplicates2(self, nums: [int]) -> int:
      index = 0
      i = 0
      while i < len(nums):
          if index == 0 or index == 1 or nums[index-2] != nums[i]:
              nums[index] = nums[i]
              index += 1
          i += 1
      return index
  
def main():
  nums = [0,0,1,1,1,2,2,3,3,4]
  expectedNums = [0,1,2,3,4]
  
  s = Solution()
  s.remove_duplicates1(nums)

  if nums != expectedNums:
    raise("element mismatch")
  else:
    print("successfully removed duplicates, nums:", nums)


main()