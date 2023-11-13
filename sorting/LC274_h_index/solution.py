class Solution:
  def h_index(self, citations: [int]) -> int:
    citations.sort()
    h = len(citations)

    for c in citations:
      if (c >= h):
        return h
      else:
        if h == 1 and c != 0:
          return 1
        h -= 1
    
    return h

def main():
  s = Solution()
  citations = [3,0,6,1,5]
  print(s.h_index(citations))

main()