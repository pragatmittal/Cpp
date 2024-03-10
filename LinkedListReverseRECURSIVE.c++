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

// function to insert tail node
void insertTailNode(node* &head, int data) {
    node* newNode = new node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// function to reverse a node using recursion
node* reverseUsingRecursive(node* &head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* newHead = reverseUsingRecursive(head->next);

    //BELOW ARE THE CODE FOR REVERSING A FIRST NODE WHICH IS NOT REVERSED.
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main() {
    node* head = NULL;
    insertTailNode(head, 1);
    insertTailNode(head, 2);
    insertTailNode(head, 3);
    insertTailNode(head, 4);
    insertTailNode(head, 5);
    insertTailNode(head, 6);

    cout << "Original linked list:" << endl;
    print(head);

    node* newHead = reverseUsingRecursive(head);

    cout << "Reversed linked list using recursion:" << endl;
    print(newHead);

    return 0;
}
