#include<iostream>
#include<algorithm>

using namespace std;

class node{
public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};


node *findMiddle(node *head) {
    if (head==NULL || head->next==NULL ) {
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }

    node* fast = head->next;
    node* slow = head;

    while (fast != NULL ) {
        fast = fast->next ;
        if (fast != NULL) {
            //fast iss samey fast->next
          fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}


void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertTailNode(node*& head, int data) {
    node* newNode = new node(data);
    if (head == NULL) {
        head = newNode;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    node* head = NULL;

    // Making a linked list of odd number of nodes: 1->2->3->4->5->NULL
    insertTailNode(head, 1);
    insertTailNode(head, 2);
    insertTailNode(head, 3);
    insertTailNode(head, 4);
    insertTailNode(head, 5);

    cout << "Printing the original Linked List" << endl;
    print(head);
    cout << "\nThe middle node of a Linked list is: " << findMiddle(head)->data << endl;

    // Making a linked list of even number of nodes: 10->20->30->40->50->60->NULL
    head = NULL;  // Reset the head
    insertTailNode(head, 10);
    insertTailNode(head, 20);
    insertTailNode(head, 30);
    insertTailNode(head, 40);
    insertTailNode(head, 50);
    insertTailNode(head, 60);

    cout << "Printing the original Linked List" << endl;
    print(head);
    cout << "\nThe middle node of a Linked list is: " << findMiddle(head)->data << endl;

    return 0;
}
