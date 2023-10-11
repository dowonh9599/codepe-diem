#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m + n);
        copy(nums2.begin(), nums2.end(), nums1.begin() + m);
        sort(nums1.begin(), nums1.end());
        return nums1;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
    int m = 3;
    vector<int> nums2 = { 2, 5, 6 };
    int n = 3;

    vector<int> merged = s.merge(nums1, m, nums2, n);
    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}