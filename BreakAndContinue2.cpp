#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number of elements you want : ";
    cin>>n;
    int i ;
    for (i=2;i<n;i++)
    {
            if(n%i==0){
                cout<<"Not a prime "<<endl;
                break;}
        }
    if(i==n){
        cout<<"Prime Number"<<endl;}
    
    
    
    
    return 0;
}