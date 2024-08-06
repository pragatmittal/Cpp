class Solution {
public:
    int uniquePathsHelper(vector<vector<int>>& obstacleGrid, int i, int j) {
        int mod =(int)(2*1e9);
        // Base case: if the current cell is out of bounds or is an obstacle
        if (i < 0 || j < 0 || obstacleGrid[i][j] == 1) {
            return 0;
        }
        // Base case: if the current cell is the starting cell
        if (i == 0 && j == 0) {
            return 1;
        }
        // Recursive case: sum of paths from the cell above and the cell to the left
        int up = uniquePathsHelper(obstacleGrid, i - 1, j);
        int left = uniquePathsHelper(obstacleGrid, i, j - 1);
        return (up + left)%mod;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return uniquePathsHelper(obstacleGrid, m - 1, n - 1);
    }
};