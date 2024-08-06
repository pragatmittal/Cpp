#include<iostream>
#include<stack>
#include<algorithm>
//size and count is the main thing to remember 

using namespace std;
void deletemiddle(stack<int>s,int n ,int current){
    if(s.empty() || current==n){
        return;

    }
    int x = s.top();
    s.pop();
    deletemiddle(s,n,current+1);
    if(current!=n/2){
        s.push(x);
    }
    
}
int main() {
    stack<int> s;
    // Push elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // s.push(5);

    int n = s.size();
    deletemiddle(s, n, 0);

    // Print the remaining elements in the stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}