class Solution {
public:
    int f(int i ,int j,vector<vector<int>>&grid){
        if(i==0 && j==0)    
            return grid[i][j];
        if(i<0 || j<0)
            return 1e9;
        int up=grid[i][j] + f(i-1, j,grid);
        int left =grid[i][j] + f(i, j-1,grid);
        
        return min(left,up);

    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        return f(n-1,m-1,grid);

    }
};