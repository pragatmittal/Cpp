class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();
        
        // Loop through each combination of three numbers
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) { // j should start from i+1
                for(int k = j + 1; k < n; k++) { // k should start from j+1
                    if ((nums[i] + nums[j] + nums[k]) == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        // Convert set to vector
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
