#include<iostream>
using namespace std;
int main()
{
    int row ,col;
    cout<<"No. of rows u wanna enter "<<endl;
    cin>>row;
    cout<<"NO.of columns u wanna enter "<<endl;
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
        cout<<"*";
        }
        
        cout<<endl;
    }

    
    return 0;
}