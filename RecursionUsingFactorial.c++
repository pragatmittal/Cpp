#include<iostream>
#include<algorithm>

using namespace std;
int factorial(int n){
    if (n==0)
        return 1;
    // int SmallNumber=factorial(n-1);
    // int largeNumber=n*SmallNumber;

    // return largeNumber;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans =factorial(n);
    cout<<ans<<endl;
    return 0;
}