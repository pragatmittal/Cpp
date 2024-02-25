#include<iostream>
using namespace std;
int main()
{
    string str="asDKfg";
//    cout<<'a'-'A';   //32
// convert into uppercase 
    for (int i=0;i<str.size();i++)
    {
        if (str[i]>='a' && str[i]<='z')
            str[i] -=32;

    }
    cout<<str;
//convert into lowercase 
    for (int i=0;i<str.size();i++)
    {
        if (str[i]>='A' && str[i]<='Z')
            str[i] +=32;

    }
    cout<<str;


    return 0;
}