#include<iostream>
#include<algorithm>

using namespace std;
//SetBit 
// 1<<i=0010
// 0100 | 0101 = 0111

int setBit(int n, int pos)
{
    return(n | (1<<pos));
}
int main(){
    cout<< setBit(5,1)<<endl;

return 0;
}
