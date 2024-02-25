#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int max1;
    int max2;
    int max;
    cin>>a>>b>>c>>d;
    max1=(a>b)?a:b;
    max2=(c>d)?c:d;
    max=(max1>max2)?max1:max2;
    cout<<max<<endl;

    return 0;
}
