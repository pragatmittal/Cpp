#include<iostream>
#include<algorithm>
using namespace std;

// Definition for singly-linked list.
class ListNode {
public:
    int data;  // Changed from 'val' to 'data'
    ListNode* next;
    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};

bool isCircular(ListNode * head) {
    // If head is already NULL, then it is the circular linked list
    // with length zero.
    if (head == NULL) {
        return true;
    }

    // If next pointer of head is already NULL, then it the linear linked
    // list of length 1, hence we return false here.
    if (head->next == NULL) {
        return false;
    }

    // Initialising slow and fast pointers with head.
    ListNode * slow = head, * fast = head;

    // Iterating through the linkedlist till, fast doesn't reach end of 
    // linked list or slow pointer will not become equal to fast pointer.
    while (fast != NULL && fast->next != NULL) {

        // Moving slow pointer by one step.
        slow = slow->next;
        // Moving fast pointer by two steps.
        fast = fast->next->next;

        // Checking if updated slow and fast pointer values are same or not.
        if (slow == fast) {
            break;
        }
    }

    // After completing the traversal, if slow and fast pointers meet,
    // then linkedlist is circular.
    return (slow == fast);
}

int main() {
    // create a circular linked list with five nodes
    ListNode* head = new ListNode(26);
    ListNode* node2 = new ListNode(34);
    ListNode* node3 = new ListNode(84);
    ListNode* node4 = new ListNode(69);
    ListNode* node5 = new ListNode(71);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // make the linked list circular by connecting the last node to the third node
    node5->next = node3;

    // check if the linked list is circular
    if (isCircular(head)) {
        cout << "The linked list is circular." << endl;
    } else {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}
