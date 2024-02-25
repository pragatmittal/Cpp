#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want to enter "<<endl;
    cin>>n;
    if (n>10)
        {cout<<"the number is greater than 10"<<endl;}
    else if (n<10){
        cout<<"the number is lesser than 10"<<endl;}
    else{
        cout<<"the number is equal to 10"<<endl;
    }

    return 0;
}