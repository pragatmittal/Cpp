#include<iostream>
#include<algorithm>

using namespace std;

// Define the node structure
struct node {
    int data;
    struct node *left, *right;
};

void morrisTraversal(struct node* root) {
    struct node* current, *pre;
    if (root == NULL) {
        return;
    }
    current = root;
    while (current != NULL) {
        if (current->left == NULL) {
            cout << current->data << " "; // Print the current node
            current = current->right;
        } else {
            pre = current->left;
            while (pre->right != NULL && pre->right != current) {
                pre = pre->right;
            }
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            } else {
                pre->right = NULL;
                cout << current->data << " "; // Print the current node
                current = current->right;
            }
        }
    }
}

int main() {
    // Create a sample binary tree
    struct node* root = new node();
    root->data = 1;
    root->left = new node();
    root->left->data = 2;
    root->right = new node();
    root->right->data = 3;
    root->left->left = new node();
    root->left->left->data = 4;
    root->left->right = new node();
    root->left->right->data = 5;

    // Perform Morris Traversal
    morrisTraversal(root);

    return 0;
}
