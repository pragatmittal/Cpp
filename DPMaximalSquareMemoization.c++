class Solution {
public:
    int solve(vector<vector<char>>& matrix, int i, int j, int &maxi, vector<vector<int>>& dp) {
        // Base case: If out of bounds, return 0
        if (i >= matrix.size() || j >= matrix[0].size())
            return 0;
        
        // Memoization: If already computed, return stored result
        if (dp[i][j] != -1)
            return dp[i][j];
        
        // Recursive calls to calculate right, diagonal, and down squares
        int right = solve(matrix, i, j + 1, maxi, dp);
        int diagonal = solve(matrix, i + 1, j + 1, maxi, dp);
        int down = solve(matrix, i + 1, j, maxi, dp);
        
        // Compute size of the square at current position
        if (matrix[i][j] == '1') {
            int ans = 1 + min(right, min(diagonal, down)); // size of current square
            maxi = max(maxi, ans); // update maximum square size found so far
            return dp[i][j] = ans; // store and return the computed size
        } else {
            return dp[i][j] = 0; // if matrix[i][j] is '0', no square can be formed here
        }
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int maxi = 0;
        vector<vector<int>> dp(m, vector<int>(n, -1)); // memoization table
        
        solve(matrix, 0, 0, maxi, dp); // start from top-left corner
        
        return maxi * maxi; // return area of the largest square
    }
};
