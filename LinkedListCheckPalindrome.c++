#include <vector>
#include <iostream>
#include <algorithm>

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

bool isPalindrome(ListNode* head) {
    vector<int> ans;
    ListNode* temp = head;
    while (temp != NULL) {
        ans.push_back(temp->data);
        temp = temp->next;
    }

    int i = 0;
    int j = ans.size() - 1;
    while (i <= j) {
        if (ans[i++] != ans[j--]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(9);

    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    // Free memory
    while (head != NULL) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
