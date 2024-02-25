#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    
    cout<<"input 1st number "<<endl;
    cin>>n1;
    cout<<"input 2nd number ";
    
    
    cin>>n2;
    char op;
    cout<<"input an operator ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '//':
        cout<<n1/n2<<endl;
        break;
    case '%':
        cout<<n1%n2<<endl;
        break;
    
    default:
        cout<<"invalid operator"<<endl;
        break;
    }
    
    return 0;
}