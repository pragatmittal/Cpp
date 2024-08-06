class CustomStack {
public:
    vector<int>v ;
    int n ;
    CustomStack(int maxSize) {
        n=maxSize;

    }
    
    void push(int x) {
        
        if(v.size()<n)
        v.push_back(x);

    }
    
    int pop() {

        if (v.size()!=0){
            int x = v[v.size()-1];
            v.pop_back();
            return x; 

        }
        return -1;
        
    }
    
    void increment(int k, int val) {
        int a;
        if(k<=v.size(   ))
            a=k;
        else
            a=v.size();
        for(int i=0;i<a;i++){
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */