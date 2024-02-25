#include<iostream>
#include<algorithm>

using namespace std;
//getBIt 
// 1<<i=0100
// 0100 & 0101
// we need to clear bit at position 2 . 
// taking  "~" component 

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos );
    return(n & mask);
}
int main(){
    cout<< clearBit(5,2)<<endl;

return 0;
}
