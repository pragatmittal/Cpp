class Solution {
public:
    bool parseBoolExpr(string s) {
        int n = s.size();
        stack<char>st;
        stack<char>op;

        for(char c : s){
            if(c == '&' || c == '|' || c == '!') op.push(c);
            else if(c == ',') continue;
            else if(c != ')') st.push(c);
            else {
                int val = st.top() == 'f' ? 0 : 1;
                st.pop();
                
                if(st.top() != '(') {
                    while(st.top() != '('){
                        int curr = st.top() == 'f' ? 0 : 1;
                        st.pop();
                        if(op.top() == '&') val &= curr;
                        else val |= curr;
                    }
                }
                if(op.top() == '!') val = !val;
                st.pop();
                val == 1 ? st.push('t') : st.push('f');
                op.pop();
            }
        }

        return st.top() == 't';
    }
};
