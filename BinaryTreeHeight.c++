#include<iostream>
#include<algorithm>

using namespace std;

// Assuming TreeNode class is defined somewhere

template<typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to find the height of a binary tree
template<typename T>
int heightOfBinaryTree(TreeNode<T> *root) {
    if(root == NULL) {
        return 0; // Base case: Height of an empty tree is 0
    }

    int leftHeight = heightOfBinaryTree(root->left); // Height of left subtree
    int rightHeight = heightOfBinaryTree(root->right); // Height of right subtree

    // Height of the tree is the maximum of left and right subtree heights, plus 1 for the root node
    int treeHeight = max(leftHeight, rightHeight) + 1;

    return treeHeight;
}

int main() {
    // Test your function here with some binary tree examples
    // TreeNode<int> *root = new TreeNode<int>(1);
    // root->left = new TreeNode<int>(2);
    // root->right = new TreeNode<int>(3);
    // root->left->left = new TreeNode<int>(4);
    // root->left->right = new TreeNode<int>(5);
    // cout << "Height of binary tree is: " << heightOfBinaryTree(root) << endl;

    return 0;
}
