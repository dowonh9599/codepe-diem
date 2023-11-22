class Solution:
  def candy(self, ratings):
    n = len(ratings)
    pref = [1]*n
    suff = [1]*n
    for i in range(1, n):
        if ratings[i] > ratings[i - 1]:
            pref[i] = 1 + pref[i - 1]
    for i in range(n - 2, -1, -1):
        if ratings[i] > ratings[i + 1]:
            suff[i] = 1 + suff[i + 1]
    ans = 0
    for i in range(n):
        ans += max(pref[i], suff[i])
    return ans
  
def main():
  ratings = [1,0,2]
  s = Solution()
  print(s.candy(ratings))

main()