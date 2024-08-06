#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;





int main()
{
    //creation of stack 
    stack<int>s;
    //push operation
    s.push(2);
    s.push(3);

    //pop operation 

    s.pop();
    cout<<"printing top elements"<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty";

    }
    else{
        cout<<"stack is not empty"<< endl;

    }

    cout<<"the size of the stack is "<<s.size();





    return 0;
}