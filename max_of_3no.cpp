#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    // cin>>a>>b>>c;
    cout<<"Enter 1ST numbers: ";
    cin>>a;
    cout<<"Enter 2ND numbers: ";
    cin>>b;
    cout<<"Enter 3RD numbers: ";
    cin>>c;
    if(a>b)
    {
        if (a>c)
        {
            cout<<"The largest number is "<<a<<endl;
        }
        else{
        cout<<"The largest number is "<<c<<endl;}
    }
    else{
        if (b>c)
        {
            cout<<b<<endl;
        }

        else{   
            cout<<"The largest number is "<<c<<endl;
        }
    }



    
    return 0;
}