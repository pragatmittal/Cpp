class Solution {
public:
    int f(int index, int target, vector<int>& nums) {
        // Base cases
        if (index == 0) {
            // If target is 0, there's one way to achieve it: by taking no elements
            if (target == 0 && nums[0] == 0) return 2;  // +/-0 both work
            return (target == nums[0]) + (target == -nums[0]);
        }
        
        // Recursive calls
        int takePositive = f(index - 1, target - nums[index], nums);
        int takeNegative = f(index - 1, target + nums[index], nums);
        
        // Total ways by adding both positive and negative cases
        return takePositive + takeNegative;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return f(n - 1, target, nums);
    }
};
