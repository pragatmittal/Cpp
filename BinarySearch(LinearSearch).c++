class Solution {
public:
    int binarysearch(vector<int>& nums, int target, int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2; // Calculate the midpoint
            if (nums[mid] == target) {
                return mid; // Target found
            }
            if (nums[mid] < target) {
                start = mid + 1; // Search the right half
            } else {
                end = mid - 1; // Search the left half
            }
        }
        return -1; // Target not found
    }

    int search(vector<int>& nums, int target) {
        return binarysearch(nums, target, 0, nums.size() - 1); // Initiate binary search
    }
};
