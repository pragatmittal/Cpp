/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int heightOfBinaryTree(TreeNode<int> *root)
{
    if(root==NULL){
        return 0;

    }
    int left= heightOfBinaryTree(root->left);
    int right=heightOfBinaryTree(root->right);
    int ans=max(left,right)+1;
    return ans;

	// Write your code here.
}
