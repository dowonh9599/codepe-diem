# Typescript

## Implementation

```typescript
// typescript
function merge(nums1: number[], m: number, nums2: number[], n: number): number[] {
  nums1.splice(m, nums1.length - m, ...nums2);
  nums1.sort((a, b) => a - b);
  return nums1;
}

const main = () => {
  const nums1 = [1, 2, 3, 0, 0, 0];
  const m = 3;
  const nums2 = [2, 5, 6];
  const n = 3;
  console.log(merge(nums1, m, nums2, n));
};

main()

```

## Approach <a href="#complexity" id="complexity"></a>

first uses the `splice` method to replace the elements in `nums1` starting at index `m` with the valid elements from `nums2`. The `splice` method is called with three arguments: the start index `m`, the number of elements to delete (`nums1.length - m`), and the new elements to insert (`...nums2.slice(0, n)`). This effectively replaces the extra space at the end of `nums1` with the values from `nums2`. Then it sorts the combined array in-place using the `sort` method.

## Complexity <a href="#complexity" id="complexity"></a>

* Time complexity: O((m+n)log(m+n))
  * _due to the sort() function_
* Space complexity: O(1)
  * _We are not using any extra space, so the space complexity is O(1)._

