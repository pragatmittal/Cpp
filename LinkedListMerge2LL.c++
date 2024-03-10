#include<iostream>
#include<algorithm>

using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T value) : data(value), next(NULL) {}
};

template <typename T>
Node<T>* solve(Node<T>* first, Node<T>* second) {
    if (first->next == NULL) {
        first->next = second;
        return first;
    }

    Node<T>* curr1 = first;
    Node<T>* next1 = curr1->next;
    Node<T>* curr2 = second;
    Node<T>* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL) {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        } else {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL) {
                curr1->next = curr2;
                return first;
            }
        }
    }

    return first;
}

template <typename T>
Node<T>* sortTwoLists(Node<T>* first, Node<T>* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }
    if (first->data <= second->data) {
        return solve(first, second);
    } else {
        return solve(second, first);
    }
}

int main() {
    // Example usage
    Node<int>* first = new Node<int>(1);
    first->next = new Node<int>(3);
    first->next->next = new Node<int>(5);

    Node<int>* second = new Node<int>(2);
    second->next = new Node<int>(4);
    second->next->next = new Node<int>(6);

    Node<int>* result = sortTwoLists(first, second);

    // Print the merged and sorted linked list
    Node<int>* temp = result;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Free memory
    while (result != NULL) {
        Node<int>* temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
