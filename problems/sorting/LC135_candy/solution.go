package main

import (
	"fmt"
)

func candy(ratings []int) int {
	n := len(ratings)
	pref := make([]int, n)
	suff := make([]int, n)
	for i := range pref {
		pref[i] = 1
		suff[i] = 1
	}
	for i := 1; i < n; i++ {
		if ratings[i] > ratings[i-1] {
			pref[i] = 1 + pref[i-1]
		}
	}
	for i := n - 2; i >= 0; i-- {
		if ratings[i] > ratings[i+1] {
			suff[i] = 1 + suff[i+1]
		}
	}
	ans := 0
	for i := 0; i < n; i++ {
		ans += max(pref[i], suff[i])
	}
	return ans
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	ratings := []int{1, 0, 2}
	fmt.Println(candy(ratings))
}
