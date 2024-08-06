/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
#include<vector>

void transverseLeft(TreeNode<int> *root, vector<int> &ans){

    if(root==NULL || (root->left==NULL && root->right==NULL)){

        return;

    }

 

    ans.push_back(root->data);

 

    if(root->left){

        transverseLeft(root->left, ans);

    }

    else{

        transverseLeft(root->right, ans);

    }

 

}

 

void transverseLeaf(TreeNode<int> *root, vector<int> &ans){

    if(root==NULL){

        return ;

    }

 

    if(root->left==NULL && root->right==NULL){

        ans.push_back(root->data);

        return;

    }

 

    transverseLeaf(root->left, ans);

    transverseLeaf(root->right, ans);

 

}

 

void transverseRight(TreeNode<int> *root, vector<int> &ans){

    if(root==NULL || (root->left==NULL && root->right==NULL)){

        return;

    }

 

    

 

    if(root->right){

        transverseRight(root->right, ans);           

    }

    else{

        transverseRight(root->left, ans);

    }

 

    ans.push_back(root->data);

 

}

 

vector<int> traverseBoundary(TreeNode<int> *root)

{

    // Write your code here.

    vector<int> ans;

 

    if(root==NULL){

        return ans;

    }

 

    ans.push_back(root->data);

 

    transverseLeft(root->left, ans);

 

    // traverse Leaf Nodes

 

        // Left subtree

        transverseLeaf(root->left, ans);

 

        // right subtree

        transverseLeaf(root->right, ans);

 

    transverseRight(root->right, ans);

 

    return ans;

}

 