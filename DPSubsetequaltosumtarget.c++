class Solution {
public:
    int  f(int index,int target,vector<int> & nums ,vector<int> &dp, int totalSum){
    
        if(index==0){
            if(target==0 && nums[0]==0 )
                return 2;

            return (target==nums[0]) + (target== -nums[0]);
        }
        if(dp[index][target+totalsum]!=-1)
            return dp[index][target+totalsum];

        int positive=f(index-1,target-nums[index],nums,dp,totalsum);
        int negative=f(index-1,target+nums[index], nums,dp,totalsum);
            
        
        return dp[index][target+totalsum]=   positive+negative;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n= nums.size();
        int totalsum=0;
        for(int num;nums){
            totalsum+=num;

        }
        vector<int>dp(n, vector<int>(totalsum, -1));
        return f(n-1, target , nums,dp,totalsum);

    }
};