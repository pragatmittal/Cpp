#include<iostream>

using namespace std;

class Stack {
private:
    int size;
    int* arr;
    int top;

public:
    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // Pop operation
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    // Push operation
    void push(int element) {
        if ((size - top) > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    // Peek operation
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack underflow" << endl;
            return -1; // Return a default value indicating underflow
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    // Example usage of the Stack class
    Stack myStack(5);

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();
    cout << "After pop, top element: " << myStack.peek() << endl;

    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
