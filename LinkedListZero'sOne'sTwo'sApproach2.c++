#include<iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to sort a linked list using Dutch National Flag algorithm
Node* sortList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
//making of a dummy nodes.
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
//...................
//dummynodes ->next= realnodes
    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
//initializing whole concept with temp which is pointing to head.
    Node* temp = head;
    //jabtak temp null point ke equal na hojaye

    while (temp != nullptr) {
        //agar temp ka data 0 hai to zero ka next ko temp daaldo
        if (temp->data == 0) {
            zero->next = temp;
            //zero ko aage badado
            zero = zero->next;
        } else if (temp->data == 1) {
            one->next = temp;
            one = one->next;
        } else if (temp->data == 2) {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (oneHead->next!=NULL) ? (oneHead->next) : (twoHead->next);
    one->next = twoHead->next;
    two->next = nullptr;

    Node* sortedHead = zeroHead->next;

    // Free the dummy heads
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return sortedHead;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(2);

    cout << "Original Linked List: ";
    printList(head);

    // Sort the linked list
    head = sortList(head);

    cout << "Sorted Linked List: ";
    printList(head);

    // Free memory (assuming you have dynamically allocated nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


