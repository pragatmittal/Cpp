#include<iostream>
#include<algorithm>

using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtTail(node* &tail, int d) {
    if (tail == NULL) {
        // If the list is empty, create a new node and make it the tail
        tail = new node(d);
    } else {
        node* temp = new node(d);
        tail->next = temp;
        tail = tail->next;
    }
}

void print(node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = tail;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* node1 = new node(10);
    node* tail = node1;
    print(tail);

    InsertAtTail(tail, 12);
    print(tail);

    InsertAtTail(tail, 14);
    print(tail);


    return 0;
}
