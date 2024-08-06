// using two stacks

class MyQueue {
public:
    stack<int>s;
    stack<int>help;

    // MyQueue() {
        
    // }
    
    void push(int x) {
     s.push(x);   
    }
    
    int pop() {
        while( s.size()>0){
            help.push(s.top());
            s.pop();

        }
        int x=help.top();
        help.pop();

        while(help.size()>0){
            s.push(help.top());
            help.pop();

        }
        return x;

    }
    
    int peek() {
           while( s.size()>0){
            help.push(s.top());
            s.pop();

        }
        int x=help.top();
        // help.pop();

        while(help.size()>0){
            s.push(help.top());
            help.pop();

        }
        return x;


    }
    
    bool empty() {
        if(s.size()==0)
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */