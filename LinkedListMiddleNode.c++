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

node* head = NULL;  // Declare head globally

// void InsertAthead(int d) {
//     node* temp = new node(d);
//     temp->next = head;
//     head = temp;
// }

void insertTailNode(int data) {
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

int getLength(node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

// Method to find the middle node of a linked list
node* findMiddle(node* head) {
    int len = getLength(head);
    int ans = (len / 2);
    node* temp = head;
    int cnt = 0;
    while (cnt < ans) {
        temp = temp->next;
        cnt++;
    }
    return temp;
}

void print() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    // Making a linked list of odd number of nodes: 1->2->3->4->5->NULL
    insertTailNode(1);
    insertTailNode(2);
    insertTailNode(3);
    insertTailNode(4);
    insertTailNode(5);
    cout << "Printing the original Linked List" << endl;
    print();
    cout << "\nThe middle node of a Linked list is: " << findMiddle(head)->data << endl;

    // Making a linked list of even number of nodes: 10->20->30->40->50->60->NULL
    head = NULL;  // Reset the head
    insertTailNode(10);
    insertTailNode(20);
    insertTailNode(30);
    insertTailNode(40);
    insertTailNode(50);
    insertTailNode(60);
    cout << "Printing the original Linked List" << endl;
    print();
    cout << "\nThe middle node of a Linked list is: " << findMiddle(head)->data << endl;

    return 0;
}
