#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value : ";
    cin>>n;
    int m=1;
    while(n>0){
            m=m*n;
            n--;
    }
        
        cout<<"Factorial is"<<" "<<m;
    return 0;
}