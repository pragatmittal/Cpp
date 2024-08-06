class Solution {
public:
    int bslb(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start;
    }
    
    int solve(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            if (nums[i] > ans.back())
                ans.push_back(nums[i]);
            else {
                int lower = bslb(ans, nums[i]);
                ans[lower] = nums[i];
            }
        }
        return ans.size();
    }

    int lengthOfLIS(vector<int>& nums) {
        return solve(nums);
    }
};
