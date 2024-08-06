#include <bits/stdc++.h> 
using namespace std;

int f(int ind, int w, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp) {
    // Base case
    if (ind == 0) {
        if (wt[ind] <= w) {
            dp[ind][w] = val[ind];
            return val[ind];
        } else {
            dp[ind][w] = 0;
            return 0;
        }
    }
    
    // Check if value is already computed
    if (dp[ind][w] != -1)
        return dp[ind][w];
    
    // Recursive cases
    int notTake = f(ind - 1, w, wt, val, dp);
    int take = INT_MIN;
    if (wt[ind] <= w) {
        take = val[ind] + f(ind - 1, w - wt[ind], wt, val, dp);
    }
    
    // Memoize the result
    dp[ind][w] = max(notTake, take);
    
    return dp[ind][w];
}

int knapsack(vector<int>& weight, vector<int>& value, int n, int maxWeight) {
    // Initialize dp table
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));

    // Call recursive function
    return f(n - 1, maxWeight, weight, value, dp);
}


