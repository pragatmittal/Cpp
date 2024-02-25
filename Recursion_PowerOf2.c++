#include<iostream>
#include<algorithm>

using namespace std;
int power(int n){
    if (n==0)
        return 1;
    // int smallerNumber=power(n-1);
    // int largerNumber=2*smallerNumber;
    // return largerNumber;
    return 2*power(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans =power(n);
    cout<<ans<<endl;
    return 0;
}