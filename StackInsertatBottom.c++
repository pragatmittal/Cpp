#include <iostream>
#include <stack>

using namespace std;

// Function to push an element to the bottom of the stack recursively
void solve(stack<int>& s, int x){
    // Base case: if the stack is empty, push the element 'x' onto the stack and return.
    if(s.empty()){
        s.push(x);
        return;
    }

    // Recursive call: pop the top element from the stack and recursively call solve.
    int num = s.top();
    s.pop();
    solve(s, x);

    // After the recursive call, push the popped element back onto the stack.
    s.push(num);
}

// Function to push an element to the bottom of the stack
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Call the solve function to push the element 'x' to the bottom of the stack recursively.
    solve(myStack, x);
    
    // Return the modified stack.
    return myStack;
}

int main() {
    stack<int> myStack;

    // Push some elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    
    // Push element 4 to the bottom of the stack
    myStack = pushAtBottom(myStack, 4);

    // Print the elements of the stack
    cout << "Stack elements after pushing 4 to the bottom:" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
