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