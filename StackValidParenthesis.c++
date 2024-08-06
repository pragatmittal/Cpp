#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

bool isValidParenthesis(string s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty() || (c == ')' && st.top() != '(') || (c == ']' && st.top() != '[') || (c == '}' && st.top() != '{')) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string testString1 = "(){}[]";
    string testString2 = "({[]})";
    string testString3 = "[()]";

    cout << boolalpha; // to print 'true' or 'false' instead of '1' or '0'
    cout << "Test 1: " << isValidParenthesis(testString1) << endl; // Should print true
    cout << "Test 2: " << isValidParenthesis(testString2) << endl; // Should print true
    cout << "Test 3: " << isValidParenthesis(testString3) << endl; // Should print false

    return 0;
}
