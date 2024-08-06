#include<vector>

class Solution {
public:
int solve(vector<int>& nums, int target){
        if(target<0)
            return 0;
        if(target==0)
            return 1;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans+=solve(nums,target-nums[i]);

        }
        return ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
       return solve(nums,target);}

};