class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0];
        int maxprofit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minPrice);
        }

        return maxprofit;
    }
};