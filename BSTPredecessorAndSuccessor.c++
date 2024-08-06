/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

void inorder(TreeNode* root,vector<int>&inorderArray){
    if (root==NULL)
        return;
    inorder(root->left,inorderArray);
    inorderArray.push_back(root->data);
    inorder(root->right,inorderArray);

}
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    vector<int> inorderArray;
    inorder(root, inorderArray);
    int predecessor = -1;
    int successor = -1;

    for (int i = 0; i < inorderArray.size(); i++) {
        if (inorderArray[i] < key)
            predecessor = inorderArray[i];
        else if (inorderArray[i] > key) {
            successor = inorderArray[i];
            break; // Exit loop after finding successor
        }
    }

    return {predecessor, successor};
}