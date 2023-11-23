package main

import (
	"fmt"
	"sort"
)

func hIndex(citations []int) int {
	// Step 1
	sort.Ints(citations)
	// Step 2
	h := len(citations)
	// Step 3
	for i := 0; i < len(citations); i++ {
		// Step 4
		if citations[i] >= h {
			// Step 5:
			return h
		} else {
			// Step 6:
			if h == 1 && citations[i] != 0 {
				return 1
			}
			h--
		}
	}
	return h
}

func main() {
	citations := []int{3, 0, 6, 1, 5}
	fmt.Println(hIndex(citations))
}
