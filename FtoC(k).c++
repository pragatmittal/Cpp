#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int start,end,gap_size;
    cin>>start>>end>>gap_size;
    for(int i=start;i<=end;i+=gap_size){
        int ans =(i-32)*5/9;
        cout<<i<<"\t"<<ans<<endl;
    }






    return 0;
}