class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=2*nums.size( );

        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(i< nums.size())
                ans[i]=nums[i];
            else
            ans[i]=nums[i-nums.size()];
        }
        return ans;
           
        
    }

};