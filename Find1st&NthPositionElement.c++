class Solution {
public:
    int lowerbound(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int firstpos = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            if (nums[mid] == target) {
                firstpos = mid;
            }
        }
        return firstpos;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return {-1, -1};
        
        int first = lowerbound(nums, target);
        if (first == -1)
            return {-1, -1};

        int last = first;
        while (last + 1 < nums.size() && nums[last + 1] == target)
            last++;
        
        return {first, last};
    }
};
