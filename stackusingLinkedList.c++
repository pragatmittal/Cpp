int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop() << " Popped from stack\n";

    return 0;
}

// Driver program to test above functions


// Output :
// 10 pushed into stack
// 20 pushed into stack
// 30 pushed into stack
// 30 popped from stack
