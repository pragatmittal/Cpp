class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max_count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            max_count=max(count,max_count);
            }
            else
                count=0;
                
        }
    
    return max_count;
    }
};