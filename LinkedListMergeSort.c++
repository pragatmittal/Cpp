// Data replacement is not allowed
// You can change the links of the linked list
#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        next = nullptr;
        this->data = data;
    }
};

void insertAtTail(Node<int>*& head, Node<int>*& tail, int val) {
    Node<int>* temp = new Node<int>(val);

    if (head == nullptr) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

Node<int>* reverse(Node<int>* head) {
    Node<int>* prev = nullptr;
    Node<int>* curr = head;
    Node<int>* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

Node<int>* add(Node<int>* first, Node<int>* second) {
    int carry = 0;
    Node<int>* ansHead = nullptr;
    Node<int>* ansTail = nullptr;

    while (first != nullptr || second != nullptr || carry != 0) {
        int val1 = 0;
        if (first != nullptr) {
            val1 = first->data;
        }

        int val2 = 0;
        if (second != nullptr) {
            val2 = second->data;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;

        if (first != nullptr) {
            first = first->next;
        }

        if (second != nullptr) {
            second = second->next;
        }
    }

    return ansHead;
}

Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Reverse input lists
    first = reverse(first);
    second = reverse(second);

    // Perform addition
    Node<int>* ans = add(first, second);

    // Reverse the result to get the correct order
    ans = reverse(ans);

    // Restore the original order of input lists
    first = reverse(first);
    second = reverse(second);

    return ans;
}


void printList(Node<int>* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    Node<int>* first = nullptr;
    Node<int>* second = nullptr;
insertAtTail(first, first, 9);
insertAtTail(first, first, 9);
insertAtTail(first, first, 9);

insertAtTail(second, second, 6);
insertAtTail(second, second, 5);


    std::cout << "First List: ";
    printList(first);

    std::cout << "Second List: ";
    printList(second);

    Node<int>* result = addTwoLists(first, second);

    std::cout << "Sum of Lists: ";
    printList(result);

    return 0;
}
