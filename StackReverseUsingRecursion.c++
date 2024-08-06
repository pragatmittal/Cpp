#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int element) {
    if (s.empty()) {
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    insertAtBottom(s, element);
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // BASE CASE
    if (stack.empty()) {
        return;
    }
    int num = stack.top();
    stack.pop();
    // Recursive call
    reverseStack(stack);
    insertAtBottom(stack, num);
}

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout << "Original Stack: ";
    stack<int> tempStack = myStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Reversing the stack
    reverseStack(myStack);

    cout << "Reversed Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
