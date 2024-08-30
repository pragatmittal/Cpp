class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans ; 
        map<int,int> map;
        int n =nums.size();
        int mini=(int)(n/3)+1;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
            if(map[nums[i]]==mini)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};