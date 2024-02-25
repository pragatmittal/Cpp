#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;
int main(){
    std::vector<std::pair<string,int>>list;
    list.push_back(std::pair<string, int>("sagar ", 77));
    list.push_back(std::pair<string, int>("Rajveer " , 55));
    list.push_back(std::pair<string, int>("saket ", 16));
    list.push_back(std::pair<string, int>("ratna ", 10));
    list.push_back(std::pair<string, int>("tata ", 17));
    for(auto&elm:list){
        cout<<elm.first<<""<<elm.second<<endl;
    }

    return 0 ;
}
