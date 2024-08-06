class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle the empty array case

        int count = 1; // Start counting unique elements
        for (int i = 1; i < nums.size(); i++) {
            // Check if the current element is different from the last unique element
            if (nums[i] != nums[count - 1]) {
                nums[count] = nums[i]; // Place it in the next unique position
                count++; // Increment the count of unique elements
            }
        }
        return count; // Return the number of unique elements
    }
};
