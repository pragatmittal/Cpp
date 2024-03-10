#include <iostream>

// Definition for singly-linked list.
struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class Solution {
private:
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(Node* &head, Node* &tail, int val) {
        Node* temp = new Node(val);
        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
    
    Node* add(Node* first, Node* second) {
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while (first != NULL || second != NULL || carry != 0) {
            int val1 = 0;
            if (first != NULL)
                val1 = first->data;
                
            int val2 = 0;
            if (second != NULL)
                val2 = second->data;
            
            int sum = carry + val1 + val2;
            
            int digit = sum % 10;
            
            // Create node and add in the answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum / 10;
            if (first != NULL)
                first = first->next;
            
            if (second != NULL)
                second = second->next;
        }
        return ansHead;
    }

public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* first, Node* second) {
        // Step 1 - Reverse input LL
        first = reverse(first);
        second = reverse(second);
        
        // Step 2 - Add 2 LL
        Node* ans = add(first, second);
        
        // Step 3 - Reverse the answer LL
        ans = reverse(ans);
        
        return ans;
    }
};

// Function to print a linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    Node* first = new Node(7);
    first->next = new Node(5);
    first->next->next = new Node(9);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(6);

    Node* second = new Node(8);
    second->next = new Node(4);

    Solution solution;
    Node* result = solution.addTwoLists(first, second);

    std::cout << "Result: ";
    printList(result);

    // Free memory
    while (first != nullptr) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }

    while (second != nullptr) {
        Node* temp = second;
        second = second->next;
        delete temp;
    }

    while (result != nullptr) {
        Node* temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
