class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> ans;
        int a = -1;  // Repeated value
        int b = -1;  // Missing value
        int n = grid.size();  // Initialize n with the grid size
        
        // Count occurrences of each number in the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                ans[grid[i][j]]++;
            }
        }
        
        // Check for the repeated and missing numbers
        for (int i = 1; i <= n * n; i++) {  // Assuming numbers from 1 to n*n
            if (ans[i] == 2) a = i;  // Find repeated value
            if (ans[i] == 0) b = i;  // Find missing value
        }
        
        return {a, b};  // Return the repeated and missing values
    }
};
