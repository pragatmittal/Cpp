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

void InsertAthead(node* &head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

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

void print(node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(node* &tail, node* &head, int position, int d) {
    // Inserting at head
    if (position == 1) {
        InsertAthead(head, d);
        if (tail == NULL) {
            tail = head;
        }
        return;
    }

    // Inserting at position
    node* temp = head;
    int count = 1;
    while (count < position - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    // Inserting at last position (tail)
    if (temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    // Creating a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    // If the new node is inserted after the current tail, update the tail pointer
    if (nodeToInsert->next == NULL) {
        tail = nodeToInsert;
    }
}

int main() {
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 14);
    print(head);

    insertAtPosition(tail, head, 4, 22);
    print(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    return 0;
}
