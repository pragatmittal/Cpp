#include<climits>
#include<vector>
// int solvemem(int n, int x, int y, int z,vector<int>&dp){
// 	if(n==0)
// 		return 0;
// 	if(n<0)
// 		return INT_MIN;
// 	if(dp[n]!=-1)
// 		return dp[n];
// 	int a=solvemem(n-x, x, y, z, dp)+1;
// 	int b=solvemem(n-y, x, y, z, dp)+1;
// 	int c=solvemem(n-z, x, y, z, dp)+1;
// 	dp[n]=max(a,max(b,c));
// 	return dp[n];


// }
int cutSegments(int n, int x, int y, int z) {
	vector<int>dp(n+1,-1);
	// int ans=solvemem(n,  x, y,  z, dp);
	// if(ans<0)
	// 	return 0;
	// return ans;

	dp[0]=0;
	for(int i =1;i<=n;i++){
		if(i>=x && dp[i-x]!=-1)
			dp[i]=max(dp[i],dp[i-x]+1);
 
		if(i>=y&&dp[i-y]!=-1)
			dp[i]=max(dp[i],dp[i-y]+1);

		if((i>=z)&&dp[i-z]!=-1)
			dp[i]=max(dp[i],dp[i-z]+1);

	}
	if (dp[n]==-1)
		return 0;
	return dp[n];

	

	// Write your code here.
}