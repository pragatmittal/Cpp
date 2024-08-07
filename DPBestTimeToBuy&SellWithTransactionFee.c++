class Solution {
public:
    int f(int ind, int buy, vector<int>&prices,int fee,vector<vector<int>>&dp){
        int n=prices.size();

        if( ind==n )
            return 0;
        if( dp[ind][buy]!=-1)
            return dp[ind][buy];
        if( buy){
            dp[ind][buy]=max((-prices[ind]+f(ind+1,0,prices,fee,dp)),(0+ f(ind+1,1,prices,fee,dp)));
        }
        else{
            dp[ind][buy]=max((prices[ind]-fee+f(ind+1,1,prices,fee,dp)),(0+ f(ind+1,0,prices,fee,dp)));
        }
        return dp[ind][buy];
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1)); // Corrected the dp initialization
        return f(0, 1, prices, fee, dp); // Start from day 0 with the option to buy    
    }
};