/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void postorder(TreeNode*root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    postorder(root->left,ans);
    postorder(root->right,ans);
    // postorder(root->left,ans);
    ans.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int>ans;
    postorder(root,ans);
    return ans;
    // Write your code here.
}