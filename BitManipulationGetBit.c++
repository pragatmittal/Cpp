#include<iostream>
#include<algorithm>

using namespace std;
//getBIt 
// 1<<i=0100
// 0100 & 0101

int getBit(int n, int pos)
{
    return(n & (1<<pos)!=0);
}
int main(){
    cout<< getBit(5,2)<<endl;

return 0;
}
