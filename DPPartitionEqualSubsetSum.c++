class Solution {
public:
    int f(int ind, int target, vector<int> &nums, vector<vector<int>> &dp) {
        if(target == 0)
            return 1;  // true
        if(ind == 0)
            return nums[0] == target ? 1 : 0;  // true or false
        if(dp[ind][target] != -1)
            return dp[ind][target];
        
        bool notpick = f(ind - 1, target, nums, dp);
        bool pick = false;
        if(nums[ind] <= target)
            pick = f(ind - 1, target - nums[ind], nums, dp);
        
        return dp[ind][target] = pick || notpick;
    }
    
    bool canPartition(vector<int>& nums) {
        int totsum = 0;
        for(int i = 0; i < nums.size(); i++) {
            totsum += nums[i];
        }  
        
        if(totsum % 2 == 1)
            return false; 
        
        int k = totsum / 2;
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        
        return f(n - 1, k, nums, dp) == 1;
    }
};
