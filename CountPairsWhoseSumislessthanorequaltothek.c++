class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n =nums.size();
        int left=0;
        int right =n-1;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]<target)
                count+=1;
            }
        }
        return count;

    }
}; 