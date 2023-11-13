#include <iostream>
#include <vector>

class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        // Step 1
        sort(citations.begin(), citations.end());
        // Step 2
        int h = citations.size();
        // Step 3
        for (int i = 0; i < citations.size(); i++) {
            // Step 4
            if (citations[i] >= h) {
                // Step 5:
                return h;
            }
            else {
                // Step 6:
                if (h == 1 && citations[i] != 0)
                    return 1;
                h--;
            }
        }
        return h;
    }
};

int main() {
    Solution s = Solution();
    std::vector<int> citations = {3,0,6,1,5};
    std::cout << s.hIndex(citations) << std::endl;
}


