# Python

## Solution

```python
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
```

## Approach

1. Sort the citations in ascending order.
2. Start with an h-index hypothesis of the total number of papers. This is because h-index cannot be greater than the total number of papers.
3. Iterate over the sorted list of citations.
4. If a paper has more citations than the current h-index hypothesis, return the h-index. This is because we have found h papers that have at least h citations each.
5. If not, decrement the h-index hypothesis and continue the loop. This is because we need to find a lower number for which there are at least that number of papers with that many citations.
6. After the loop, if h-index is not found, return the last h-index hypothesis.

## Complexity Analysis

Time Complexity: `O(n log n)`

* The dominant factor here is the sort operation in Step 1. The loop in Step 3 has a time complexity of O(n), but since O(n log n) is larger, that's the overall time complexity.

Space Complexity: `O(1)`

* algorithm uses a fixed amount of space. The input vector is sorted in place, and no additional data structures that scale with input size are used. The variables `h` and `i` use a constant amount of space.
