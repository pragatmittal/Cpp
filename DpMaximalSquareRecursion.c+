class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        
        int m = matrix.size();
        int n = matrix[0].size();
        int maxi = 0;
        
        // Define a recursive function to find the maximal square size
        // Starting from position (i, j)
        function<int(int, int)> solve = [&](int i, int j) {
            // Base case: If out of bounds, return 0
            if (i >= m || j >= n)
                return 0;
            
            // Recursively find sizes of squares in right, diagonal, and down directions
            int right = solve(i, j + 1);
            int diagonal = solve(i + 1, j + 1);
            int down = solve(i + 1, j);
            
            // Calculate the size of the square at (i, j)
            if (matrix[i][j] == '1') {
                int side = 1 + min(right, min(diagonal, down)); // size of current square
                maxi = max(maxi, side); // update maximum square size found so far
                return side; // return size of the square
            } else {
                return 0; // if matrix[i][j] is '0', no square can be formed here
            }
        };
        
        // Call the recursive function starting from each cell in the matrix
        // Update `maxi` as we explore each cell
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                solve(i, j);
            }
        }
        
        return maxi * maxi; // return area of the largest square found
    }
};
