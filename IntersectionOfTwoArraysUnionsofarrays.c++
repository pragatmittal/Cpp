class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp; // This vector will store the intersection elements
        int i = 0;
        int j = 0;
        
        // Sorting the arrays to handle duplicates more easily
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                temp.push_back(nums1[i]);
                
                // Move to the next different element in nums1
                int current = nums1[i];
                while (i < nums1.size() && nums1[i] == current) {
                    i++;
                }
                
                // Move to the next different element in nums2
                current = nums2[j];
                while (j < nums2.size() && nums2[j] == current) {
                    j++;
                }
            } else if (nums1[i] < nums2[j]) {
                i++; // Move to the next element in nums1
            } else {
                j++; // Move to the next element in nums2
            }
        }
        
        return temp;
    }
};
