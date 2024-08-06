class Solution {
public://we have to return that element who is not repeating itself in that vector
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]==1)
        return 1;
        for(int i=0;i<n;i++){
            if(nums[i]!=nums [i+1])
                return nums[i+1];
        }
    return nums[n];

    }
};