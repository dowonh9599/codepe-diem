function candy(ratings: number[]): number {
  let n = ratings.length;
  let pref: number[] = Array(n).fill(1);
  let suff: number[] = Array(n).fill(1);
  for(let i = 1; i < n; i++){
      if(ratings[i] > ratings[i - 1]) pref[i] = 1 + pref[i - 1];
  }
  for(let i = n - 2; i >= 0; i--){
      if(ratings[i] > ratings[i + 1]) suff[i] = 1 + suff[i + 1];
  }
  let ans = 0;
  for(let i = 0; i < n; i++) ans += Math.max(pref[i], suff[i]);
  return ans;
}

function LC135Main() {
  const ratings = [1,0,2]
  console.log(candy(ratings))
}

LC135Main()