/************************************************************

    Following is the TreeNode class structure

    template <typename T>
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

************************************************************/
pair<int,int>diameter(TreeNode<int> *root){
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;

    }
    pair<int,int> left= diameter(root->left);
    pair<int,int> right= diameter(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+ right.second;

    pair<int,int> ans;
    ans.first=max(op2,max(op1,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}
int diameterOfBinaryTree(TreeNode<int> *root){
    if (root == NULL) {
        return 0;
    }
        pair<int,int>ans=diameter(root);
        return ans.first;
    
	// Write Your Code Here.
}

