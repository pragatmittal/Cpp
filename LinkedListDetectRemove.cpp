#include <iostream>

using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};

ListNode* FloydDetectionAlgorithm(ListNode* head, ListNode*& intersection) {
    if (head == NULL) {
        return NULL;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (slow != NULL && slow->next != NULL) {
        fast = fast->next;
        if (fast->next != NULL) {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast) {
            intersection = slow;
            return slow;
        }
    }

    return NULL;
}

ListNode* getstartingnode(ListNode* head) {
    if (head == NULL) {
        return NULL;
    }

    ListNode* intersection = NULL;
    intersection = FloydDetectionAlgorithm(head, intersection);

    if (intersection == NULL) {
        return NULL;
    }

    ListNode* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

ListNode* removeLoop(ListNode* head) {
    if (head == NULL) {
        return NULL;
    }

    ListNode* startofloop = getstartingnode(head);

    if (startofloop == NULL) {
        return head;
    }

    ListNode* temp = startofloop;

    while (temp->next != startofloop) {
        temp = temp->next;
    }

    temp->next = NULL;
    return head;
}

int main() {
    // Example usage with a linked list
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Creating a loop in the linked list for demonstration
    node5->next = node2;

    ListNode* startNode = NULL;
    if (FloydDetectionAlgorithm(head, startNode)) {
        cout << "There is a loop in the linked list." << endl;
        cout << "Starting node of the loop is at: " << startNode->data << endl;

        // Remove the loop
        removeLoop(head);
        cout << "Loop removed." << endl;
    } else {
        cout << "There is no loop in the linked list." << endl;
    }

    return 0;
}
