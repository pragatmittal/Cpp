#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int reverse=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        reverse= (reverse*10)+lastdigit;
        n /=10;

        
    }  
    cout<<reverse + " "<<endl;   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
