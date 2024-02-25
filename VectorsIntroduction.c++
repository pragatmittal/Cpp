#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v;
    cout<<"size-->"<<v.size()<<endl;
    cout<<"capacity-->"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size-->"<<v.size()<<endl;
    cout<<"capacity-->"<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"size-->"<<v.size()<<endl;
    cout<<"capacity-->"<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    cout<<"Elements at 0th index is "<<v.at(0)<<endl;
    cout<<"Elements at 1st index is "<<v.at(1)<<endl;
    cout<<"Elements at 2nd index is "<<v.at(2)<<endl;

    cout<<"element at front is "<<v.front()<<endl;
    cout<<"element at front is "<<v.back()<<endl;
    

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
        }cout<<endl;
    
    v.pop_back();
    
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
        }cout<<endl;




}
