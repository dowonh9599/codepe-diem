function LC45Max(a: number, b: number) {
  if (a > b) {
    return a
  } else {
    return b
  }
}

function jump(nums: number[]) {
  const n = nums.length

  if (n < 2) {
    return 0
  }

  let maxPos = nums[0]
  let maxSteps = nums[0]

  let jumps = 1
  for (let i = 0; i < n; i++) {
    if (maxSteps < i) {
      jumps++
      maxSteps = nums[i] + i
    }
    maxPos = LC45Max(maxSteps, nums[i] + i)
  }

  return jumps
}

function LC45Main() {
  nums = [2,3,1,1,4];
  console.log(jump(nums))
}
LC45Main()