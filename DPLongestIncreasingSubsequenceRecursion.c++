class Solution {
public:
    int solve(vector<int>& nums, int curr, int prev) {
        int n = nums.size();
        if (curr == n) return 0;

        int include = 0;
        if (prev == -1 || nums[curr] > nums[prev]) {
            include = 1 + solve(nums, curr + 1, curr);
        }
        
        int exclude = solve(nums, curr + 1, prev);
        return max(include, exclude);
    }

    int lengthOfLIS(vector<int>& nums) {
        return solve(nums, 0, -1);
    }
};
