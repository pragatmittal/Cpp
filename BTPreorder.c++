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
    void preorder(TreeNode<int> * root, vector<int>&ans){

        if(root == NULL){

            return ;

        }

 

        ans.push_back(root->data);

        preorder(root->left,ans);

        preorder(root->right,ans);

    }

 

vector<int> preOrder(TreeNode<int> * root){

    // Write your code here.

    vector<int>ans;

    preorder(root,ans);

    return ans;

 

}

 