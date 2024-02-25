#include<iostream>
#include<algorithm>

using namespace std;
//UpdateBit = ClearBit + SetBit  
//SetBit 
// 1<<i=0010
// 0100 | 0101 = 0111


int updateBit(int n, int pos,int value)
{
    int mask = ~(1 << pos );
    n = n & mask; 
    return (n|(value<<pos)); 
}
int main(){
    cout<<updateBit(5,1,1)<<endl;

return 0;
}
