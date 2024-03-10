#include<iostream>
#include<unordered_set>

using namespace std;

// Node structure for the linked list
struct node {
    int data;
    node* next;

    // Constructor for creating a node
    node(int val) : data(val), next(NULL) {}
};

// Function to remove duplicates from a sorted linked list
node* removeDuplicates(node* head) {
    if (head == NULL) { 
        return NULL;
    }
    unordered_set<int>user;
    node* current = head;
    node* previous= NULL;

    while (current != NULL) {
        if(user.find(current->data)!=user.end()){//this condition checks whether the data is already present in the linked ist or not in unordered set.the "User"keeps the track of unique values encounteres in linked list.
        
            previous->next=current->next;
            delete current;
            current=previous->next;
        }//duplicate node found the remove that fucking node
        else{
            user.insert(current->data);
            previous=current;
            current=current->next;
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
    head->next = new node(300);
    head->next->next = new node(2);
    head->next->next->next = new node(30);
    head->next->next->next->next = new node(3);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = new node(30);
    head->next->next->next->next->next->next = new node(4);
    head->next->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next->next = new node(300);
    head->next->next->next->next->next->next->next->next->next = new node(3);

    cout << "Original Linked List: ";
    displayList(head);

    // Removing duplicates
    head = removeDuplicates(head);

    cout << "Linked List after removing duplicates: ";
    displayList(head);

    return 0;
}
