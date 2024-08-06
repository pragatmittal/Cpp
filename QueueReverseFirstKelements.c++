#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{

    return 0;
}
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int>s;
    for(int i=0;i<k;i++){
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q.push(val);
    }
    int variable=q.size()-k;
    while(variable--){
        int val=q.front();
        q.pop();
        q.push(val);

    }
    return q;

    // Write your code here.
}
