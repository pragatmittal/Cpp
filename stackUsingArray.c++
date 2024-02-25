// The Stack is a linear data structure, which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).The LIFO order says that the element which is inserted at the last in the Stack will be the first one to be removed. In LIFO order, the insertion takes place at the rear end of the stack and deletion occurs at the rear of the stack.
// The FILO order says that the element which is inserted at the first in the Stack will be the last one to be removed. In FILO order, the insertion takes place at the rear end of the stack and deletion occurs at the front of the stack.


// Mainly, the following three basic operations are performed in the stack:
// Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
// Pop: Removes an item from the stack. The items are popped in the reversed order in which they were pushed. If the stack is empty, then it is said to be an Underflow condition.
// Peek or Top: Returns the top element of the stack.
// isEmpty: Returns true if the stack is empty, else false.


// stack

// How to understand a stack practically?


// There are many real-life examples of a stack. Consider the simple example of plates stacked over one another in a canteen. The plate that is at the top is the first one to be removed, i.e. the plate that has been placed at the bottommost position remains in the stack for the longest period of time. So, it can be simply seen to follow LIFO/FILO order.

// Time Complexities of operations on stack: The operations push(), pop(), isEmpty() and peek() all take O(1) time. We do not run any loop in any of these operations.


// Implementation: There are two ways to implement a stack.
// Using array
// Using linked list


// Implementing Stack using Arrays



// /* C++ program to implement basic stack operations */

#include<bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack

    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x <<" pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}



// Pros: Easy to implement. Memory is saved as pointers are not involved.
// Cons: It is not dynamic. It doesn’t grow or shrink depending on needs at runtime.