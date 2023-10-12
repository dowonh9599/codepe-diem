# C++

## Implementation

```cpp
// cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution1 {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m + n);
        copy(nums2.begin(), nums2.end(), nums1.begin() + m);
        sort(nums1.begin(), nums1.end());
        return nums1;
    }
};

class Solution2 {
public:
    vector<int>& merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0)
            return nums1;
        else if(m == 0) {
            for(int i = 0 ; i < n ; i++){
                nums1[i] = nums2[i];
            }
            return nums1;
        }
        else{
            int i = 0;
            int j = n-1;
            while(i < m && j >= 0) {
                if(nums1[i] > nums2[j])
                {
                    int temp = nums1[i];
                    nums1[i] = nums2[j];
                    nums2[j] = temp;
                }
                i++;
                j--;
            }
            for(int k = 0 ; k < n ; k++) {
                nums1[m++] = nums2[k];
            }
            sort(nums1.begin(), nums1.end());
            return nums1;
        }
    }
};

class Solution3 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main() {
    Solution1 s1;
    Solution2 s2;
    vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
    int m = 3;
    vector<int> nums2 = { 2, 5, 6 };
    int n = 3;

    // Solution 1: Lazy solution
    vector<int> mergedWithS1 = s1.merge(nums1, m, nums2, n);
    for (int i = 0; i < mergedWithS1.size(); i++) {
        cout << mergedWithS1[i] << " ";
    }
    cout << endl;


    // Solution 2: Fastest solution
    vector<int> mergedWithS2 = s2.merge(nums1, m, nums2, n);
    for (int i = 0; i < mergedWithS2.size(); i++) {
        cout << mergedWithS1[i] << " ";
    }
    cout << endl;


    // Solution 3: Most efficient
    vector<int> mergedWithS2 = s2.merge(nums1, m, nums2, n);
    for (int i = 0; i < mergedWithS2.size(); i++) {
        cout << mergedWithS1[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Approach <a href="#complexity" id="complexity"></a>

**Solution 1:**

* The `merge` function in `Solution1` resizes `nums1` to `m + n` using the `resize` method of the vector. This ensures that `nums1` has enough room to store the elements of both vectors.
* It then uses the `copy` algorithm to copy the elements from `nums2` into the additional space in `nums1` (`nums1.begin() + m` is the starting point to copy the elements).
* After this, it sorts `nums1` in place using the `sort` algorithm.
* Finally, it returns the sorted merged vector `nums1`.

**Solution 2:**

* The `merge` function in `Solution2` handles three cases: If `n` (the size of `nums2`) is 0, it just returns `nums1`. If `m` (the size of `nums1`) is 0, it copies all the elements from `nums2` into `nums1`.
* If both `m` and `n` are non-zero, the function enters a while loop, where it compares the elements from `nums1` and `nums2` and swaps them if the element from `nums1` is greater than the element from `nums2`. The loop continues until it has iterated over all elements of `nums1` or `nums2`.
* Following this, it inserts the remaining elements from `nums2` into `nums1`.
* It then sorts `nums1` in place using the `sort` algorithm and returns the sorted merged vector `nums1`.

Solution 3:

* This solution uses three pointers `i`, `j`, and `k`. `i` is initialized to the last valid element of `nums1`, `j` to the last element of `nums2`, and `k` to the last element of the merged array (which is `nums1` after being resized).
* The `while` loop runs as long as there are elements in `nums2` (i.e., `j >= 0`).
* Inside the loop, it checks if `nums1[i]` is greater than `nums2[j]` and if there are still elements in `nums1` to be compared (i.e., `i >= 0`). If `nums1[i]` is indeed greater, it places `nums1[i]` at the position pointed to by `k` in the merged array and decrements `i` and `k`.
* If `nums1[i]` is not greater than `nums2[j]` or there are no more elements in `nums1` to be compared, it places `nums2[j]` at the position pointed to by `k` in the merged array and decrements `j` and `k.`
* This process continues until all elements in `nums2` have been placed in the correct positions in `nums1`.

## Complexity <a href="#complexity" id="complexity"></a>

* **Time complexity:**&#x20;
  * Solution 1: `O((m+n)log(m+n))`
    * Resizing the vector `nums1` takes O(1) time.
    * Copying elements from `nums2` to `nums1` takes O(n) time, where n is the number of elements in `nums2`.
    * Sorting `nums1` takes O((m+n) log (m+n)) time, where m is the number of elements originally in `nums1`, and n is the number of elements in `nums2`.
  * Solution 2: `O((m+n)log(m+n))`
    * If n or m is 0, the function simply returns `nums1` or copies `nums2` into `nums1`, which takes O(n) time, where n is the number of elements in `nums2`.
    * If both m and n are non-zero, the function enters a loop that iterates over all elements of `nums1` and `nums2`, which takes O(m+n) time.
    * Inserting the remaining elements from `nums2` into `nums1` takes O(n) time.
    * Sorting `nums1` takes O((m+n) log (m+n)) time.
  *   Solution 3: `O(m+n)`

      In the worst case scenario, each element in both arrays `nums1` and `nums2` may need to be looked at once. Here, m and n are the number of elements in `nums1` and `nums2` respectively. Specifically, the while loop inside the `merge` function can run up to m+n times if all elements in `nums2` are smaller than all elements in `nums1`.
* **Space complexity:**
  * O(1) for all solutions
    * We are not using any extra space, so the space complexity is O(1).

