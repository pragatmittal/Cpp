class Solution {
public:
    int countways(int m,int n){
        if(m==0&& n==0)
            return 1;
        if(n<0 || m<0)
            return 0;
        int left= countways(m,n-1,dp);
        int up=countways(m-1 ,n,dp);
        return left+up;

    }
    int uniquePaths(int m, int n) {
     return countways(m-1,n,dp);

    }
};