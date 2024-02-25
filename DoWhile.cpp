#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number : ";
    int n;
    cin>>n;
    do
    {
        cout<<"Hello World!"<<endl;
        cin>>n;       
    } while (n==0);  
    
    cout<<"Wrong Input";
    
    return 0;
}