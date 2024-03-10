#include<iostream>

using namespace std;

class node {
public:
    int data;
    node* next;
    
    // CONSTRUCTOR 
    node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // DESTRUCTOR
    ~node() {
        cout << "Memory is freed for node with data " << data << endl;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
    }
}; 

void InsertAtHead(node* &head, int d) {
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
        tail = temp;
    }
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(node* &tail, node* &head, int position, int d) {
    // Inserting at head
    if (position == 1) {
        InsertAtHead(head, d);
        if (tail == NULL) {
            tail = head;
        }
        return;
    }

    // Inserting at position
    node* temp = head;
    int count = 1;
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // Inserting at last position (tail)
    if (temp != NULL) {
        InsertAtTail(tail, d);
    }
}

void deleteNode(int position, node*& head) {
    // Deleting the first or start node
    if (position == 1) {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        node* current = head;
        node* previous = NULL;
        int count = 1;
        while (count < position && current != NULL) {
            previous = current;
            current = current->next;
            count++;
        }
        if (current != NULL) {
            previous->next = current->next;
            current->next = NULL;
            delete current;
        }
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

    insertAtPosition(tail, head, 2, 22);  // corrected position
    print(head);
    
    deleteNode(2, head);
    print(head);

    // Freeing the memory allocated for the entire list (head node)
    // delete head;

    return 0;
}
