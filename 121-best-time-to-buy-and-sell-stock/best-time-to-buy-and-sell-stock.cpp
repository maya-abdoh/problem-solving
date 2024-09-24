#include <iostream>
#include <vector>
#include <algorithm>  // لاستخدام min

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int minPrice = prices[0];  
        int maxProfit = 0; 
        for (int i = 1; i < prices.size(); ++i) {
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }
};
