#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int lastDigit=0;
    int sum=0;
    int original = 0;
    original=n;
    while(original!=0){
        lastDigit=original%10;
        // sum+=pow(lastDigit,3);
        sum+=lastDigit*lastDigit*lastDigit;
        original/=10;}
    if(sum==n){
        cout<<n<<"the number is armstrong no."<<endl;
    }
    else{
        cout<<n <<"the number is not a  armstrong no."<<endl;
    }
    
    

    
    return 0;
}