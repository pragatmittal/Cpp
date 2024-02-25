#include<iostream>
#include<algorithm>
#include<bitset>

using namespace std;

int numberofones(int n)
{
    int count=0;
    while (n){
        n=n&(n-1);
        count++;

    }
    return count;

} 
int main()
{
    int n = 19;
    cout<<"the binary representation of "<< n <<":"<< bitset<32>(n)<<endl;
    cout<< numberofones(n)<<endl;
        
    return 0;
}