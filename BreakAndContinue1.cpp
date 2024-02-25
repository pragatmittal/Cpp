#include<iostream>
using namespace std;
int main()
{
    cout<<"what's the date"<<endl; 
    int pocketMoney=30000;
    for (int date=1; date<=30;date++){
        if (date%2==0){
            continue;
        }
        if (pocketMoney==0){
            break;
        }
    cout<<"Go for today !"<<endl;
    pocketMoney=pocketMoney-300;
    } 
    return 0;
}