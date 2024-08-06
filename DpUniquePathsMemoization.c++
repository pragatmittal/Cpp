class Solution {
public:
    int countways(int m, int n, vector<vector<int>>& dp) {
        // Base case: If we reach the starting cell (0,0)
        if (m == 0 && n == 0)
            return 1;
        
        // If the current cell is out of bounds
        if (m < 0 || n < 0)
            return 0;
        
        // If we have already calculated the number of ways for this cell
        if (dp[m][n] != -1)
            return dp[m][n];
        
        // Calculate the number of ways to reach the current cell from the left and top cells
        int left = countways(m, n - 1, dp);
        int up = countways(m - 1, n, dp);
        
        // Store the result in the dp table and return it
        return dp[m][n] = left + up;
    }
    
    int uniquePaths(int m, int n) {
        // Initialize the dp table with -1
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        // Start the recursion from the bottom-right corner of the grid
        return countways(m - 1, n - 1, dp);
    }
};
