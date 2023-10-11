class Solution:
  def merge(self, nums1, m, nums2, n):
    nums1[m:] = nums2
    nums1.sort()
    return nums1

s = Solution()
nums1 = [1, 2, 3, 0, 0, 0]
m = 3
nums2 = [2, 5, 6]
n = 3
merged = s.merge(nums1, m, nums2, n)
print(merged)