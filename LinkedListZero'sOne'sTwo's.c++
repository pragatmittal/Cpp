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
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    // Count the occurrences of 0s, 1s, and 2s
    while (temp != nullptr) {
        if (temp->data == 0) {
            zeroCount++;
        } else if (temp->data == 1) {
            oneCount++;
        } else if (temp->data == 2) {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;

    // Update the linked list with sorted values
    while (temp != nullptr) {
        if (zeroCount != 0) {
            temp->data = 0;
            zeroCount--;
        } else if (oneCount != 0) {
            temp->data = 1;
            oneCount--;
        } else if (twoCount != 0) {
            temp->data = 2;
            twoCount--;
        }
        
        temp = temp->next;
    }

    return head;
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
