#include<iostream>
#include<algorithm>

using namespace std;
int countDistinctWayToClimbStairs(int nstairs){
    if(nstairs<0)
        return 0 ;
    if(nstairs==0)
        return 1 ;
    int ans=countDistinctWayToClimbStairs(nstairs-1)+countDistinctWayToClimbStairs(nstairs-2);

    return ans; 

}
int main()
{
    int n ;
    cin>>n;
    
    int ans = countDistinctWayToClimbStairs(n);

    cout<<ans<<endl;
    return 0;
}