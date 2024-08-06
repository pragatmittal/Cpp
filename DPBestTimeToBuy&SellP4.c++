class Solution {
public:
    int f(int ind ,int buy , int k , vector<int> &prices ,vector<vector<vector<int>>> &dp){
        int n= prices.size();
        if(ind==n || k==0){
            return 0;
        }
        if (dp[ind][buy][k] != -1)
            return dp[ind][buy][k];
        if(buy ==0 ){
            int op1= 0+ + f( ind +1  , 0 , k ,prices , dp);
            int op2= -prices[ind] + f( ind +1  , 1 , k ,prices , dp);
           dp[ind][buy][k] = max(op1, op2);
        }

        else{
            int op1= 0 + f( ind +1  , 1 , k ,prices , dp);
            int op2= prices[ind] + f( ind +1  , 0 , k-1 ,prices , dp);
           dp[ind][buy][k] = max(op1, op2);
        }

        return dp[ind][buy][k];

    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return f(0, 0, k, prices, dp);

    }
};