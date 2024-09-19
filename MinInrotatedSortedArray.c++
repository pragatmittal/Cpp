class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If the mid element is less than the rightmost, the min must be on the left (including mid)
            if (nums[mid] < nums[right]) {
                right = mid;
            }
            // Else, the minimum must be on the right of mid
            else {
                left = mid + 1;
            }
        }

        return nums[left]; // 'left' will point to the minimum element
    }
};
