#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;
int main()
{
    string str="Pragat";//make a string 
    stack<char>s;//make a stack s 

    for(int i=0;i<str.length();i++){
        char ch=str[i];// make a char in which string str is stored /
        s.push(ch);//then push the elements into the stack"s".
    }
    string ans="";//initalize a ans String with "ans".

    while(!s.empty()){ //and jabtak aapki stack empty na hojaye  tabtak 
        char ch=s.top();//humne character uthaya jo stack ke top pr padha hai.
        ans.push_back(ch);//inserting the 'ch' elements at the end of 'ans' stack.
        s.pop();//popping necessary as it is within the stack 's' .
        }
    cout<<"ans is "<<ans<<endl;

    return 0;
}