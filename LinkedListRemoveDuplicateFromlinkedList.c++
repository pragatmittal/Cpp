#include<iostream>
#include<algorithm>

using namespace std;

// Node structure for the linked list
struct node {
    int data;
    node* next;
    
    // Constructor for creating a node
    node(int val) : data(val), next(NULL) {}
};

// Function to remove duplicates from a sorted linked list
node* uniquesortedlist(node* head) {
    if (head == NULL) {
        return NULL;
    }

    node* current = head;
    while (current->next != NULL) {
        if (current->data == current->next->data) {
            node* next_next = current->next->next;
            delete(current->next);
            current->next = next_next;
        }
        else {
            current = current->next;
        }
    }

    return head;
}

// Function to display the linked list
void displayList(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating a sorted linked list: 1->1->2->3->3
    node* head = new node(1);
    head->next = new node(1);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(3);

    cout << "Original Linked List: ";
    displayList(head);

    // Removing duplicates
    head = uniquesortedlist(head);

    cout << "Linked List after removing duplicates: ";
    displayList(head);

    return 0;
}
