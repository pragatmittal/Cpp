#include<iostream>
using namespace std;
int main()
{
    char arr[1000]="Apple mango ";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }    
    return 0;
}