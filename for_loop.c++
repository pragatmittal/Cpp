#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    string n[]={"one","two","thir","four","five","six","seven","eight","nine"};
    for (int a;a<=b;a++){
        if(a>=1 && a<10){
            cout<<n[a-1]<<endl;  
        }
        else{
            if (a%2==0){
                cout<<"even"<<endl;
            }
           else{
            cout<<"odd"<<endl;}
        }     
    }
    return 0;
}