#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>
#include<stack>
#include <queue>

using namespace std;
int main()
{

    return 0;
}


queue<int> reverseQueue(queue<int> q)
{
    stack<int>s;
    while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);


    }
    return q;
    // Write your code here.
}
