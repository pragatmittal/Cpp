#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> t;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            t.push(ch);
        }
        if (ch == ')') {
            bool redundant = true;
            while (t.top() != '(') {
                if (t.top() == '+' || t.top() == '-' || t.top() == '*' || t.top() == '/') {
                    redundant = false;
                }
                t.pop();
            }
            t.pop(); // Pop the '('
            if (redundant) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string expression = "((a+b))";
    if (findRedundantBrackets(expression)) {
        cout << "Redundant brackets found\n";
    } else {
        cout << "No redundant brackets found\n";
    }
    return 0;
}
