#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    string sLower ="aSDFghjk";
    string sUpper ="QWWertyu";

    transform(sLower.begin(),sLower.end(),sLower.begin(),::toupper);
    cout<<"Lower string is "<<sLower<<endl;

    transform(sUpper.begin(),sUpper.end(),sUpper.begin(),::tolower);
    cout<<"uppercase string is "<<sUpper<<endl;

    return 0;
}