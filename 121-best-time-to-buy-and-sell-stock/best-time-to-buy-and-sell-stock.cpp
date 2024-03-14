class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int highest = 0;
        int ans = 0;
        for (int i = prices.size() - 1; i > -1; i--) {
            if (prices[i] > highest) {
                highest = prices[i];
                prices[i] = 0;
            } else {
                if (highest - prices[i] > ans)
                    ans = highest - prices[i];
            }
        }
        return ans;
    }
};