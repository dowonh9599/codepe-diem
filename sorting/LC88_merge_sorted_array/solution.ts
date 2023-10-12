
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
