class Solution {
public:
    int f( int i ,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
    int n= triangle.size();
    if(i==n-1)

        return triangle[n-1][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    int down=triangle[i][j]+f(i+1,j,triangle,dp);
    int diagnol=triangle[i][j]+f(i+1,j+1,triangle,dp);
    return min(down,diagnol);

}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));

        return f(0,0,triangle,dp);

    }
};