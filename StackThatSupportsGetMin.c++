#include<stack>

class SpecialStack {
    stack<int> s;
   int mini;
    public:
        void push(int data) {
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data<mini){
                s.push(2*data-mini);
                mini=data;
            }
            else{
                s.push(data);
            }
        }
        // Implement the push() function.
    }

    int pop() {
        if(s.empty()){
            return -1;

        }
        int curr=s.top();
        s.pop();
        if(curr>mini){
            return curr;
        }
        else{
            int prevMin=mini;
            int val=2*mini-curr;
            mini=val;
            return prevMin;


        }
        
        // Implement the pop() function.
    }

    int top() {
        if(s.empty()){
            return -1;

        }
        int curr=s.top();
        if(curr<mini){
            return mini;

        }
        else{
            return curr;
        }
        // Implement the top() function.
    }

    int getMin() {
        if(s.empty()){
            return -1;

        }
        return mini;
        // Implement the getMin() function.
    }  
};