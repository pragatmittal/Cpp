class Solution {
public:int f( int i ,int j,vector<vector<int>>& triangle){
    int n= triangle.size();
    if(i==n-1)
        return triangle[n-1][j];
    int down=triangle[i][j]+f(i+1,j,triangle);
    int diagnol=triangle[i][j]+f(i+1,j+1,triangle);
    return min(down,diagnol);

}
    int minimumTotal(vector<vector<int>>& triangle) {
        return f(0,0,triangle);

    }
};