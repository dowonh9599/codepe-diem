#include <iostream>
#include <vector>

class Solution {
public:
    int minimumCoins(int amount) {
        int count = 0;
        std::vector<int> coinTypes = {500, 100, 50, 10};
        
        for (int coin: coinTypes) {
            count += amount / coin;
            amount %= coin;
        }
        
        return count;
    }
};

int main() {
    int amount = 1260;
    Solution s = Solution();
    std::cout << s.minimumCoins(amount) << std::endl;
}
