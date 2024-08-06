class Solution {
public:
    int countways(int m,int n,int dp[][]){

        
        if(m==0&& n==0)
            return 1;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(n<0 || m<0)
            return 0;



        int left= countways(m,n-1);
        int up=countways(m-1 ,n);


        return left+up;

    }
    int uniquePaths(int m, int n) {


     return countways(m-1,n-1);

    }
};