/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

void solve(BinaryTreeNode<int>* root, vector<int>& ans) {
    if(root == NULL) {
        return;
    }

    int leftData = 0;
    int rightData = 0;

    if(root->left != NULL) {
        leftData = root->left->data;
    }

    if(root->right != NULL) {
        rightData = root->right->data;
    }

    root->data = leftData + rightData;
    ans.push_back(root->data);

    solve(root->left, ans);
    solve(root->right, ans);
}

vector<int> sumTree(BinaryTreeNode<int> *root) {
    vector<int> ans;
    solve(root, ans);
    return ans;
}