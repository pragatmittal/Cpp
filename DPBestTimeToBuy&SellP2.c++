class Solution {
public:
    int f(int index, bool buy, vector<int> &prices, vector<vector<int>> &dp) {
        int n = prices.size();
        if (index == n) {
            return 0;
        }
        if (dp[index][buy] != -1) {
            return dp[index][buy];
        }
        
        int profit = 0;
        if (buy) {
           
            profit = max(-prices[index] + f(index + 1, 0, prices, dp), f(index + 1, 1, prices, dp));
        } else {
            
            profit = max(prices[index] + f(index + 1, 1, prices, dp), f(index + 1, 0, prices, dp));
        }
        
        return dp[index][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));  // 2 states: buy (1) and sell (0)
        return f(0, 1, prices, dp);
    }
};
