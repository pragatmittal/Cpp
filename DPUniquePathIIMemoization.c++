class Solution {
public:
    int unique(vector<vector<int>>& obstacleGrid, int i, int j,vector<vector<int>>& memo) {
        int mod =(int)(2*1e9);

        if (i < 0 || j < 0 || obstacleGrid[i][j] == 1) {
            return 0;
        }
        if (memo[i][j]!=-1)
            return memo[i][j];


        if (i == 0 && j == 0) {
            return 1;
        }

        int up = unique(obstacleGrid, i - 1, j,memo);
        int left = unique(obstacleGrid, i, j - 1,memo);
        memo[i][j] = (up + left)%mod;
        return memo[i][j];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>memo(m,vector<int>(n,-1));
        return unique(obstacleGrid, m - 1, n - 1,memo);
    }
};
