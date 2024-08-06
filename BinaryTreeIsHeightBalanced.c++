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
pair<bool, int> isBalancedBTFast(TreeNode<int> *root){

    if(root==NULL){

        pair<bool, int> p = make_pair(true, 0);

        return p;

    }

 

    pair<bool, int> left = isBalancedBTFast(root->left);

    pair<bool, int> right = isBalancedBTFast(root->right);

 

    bool leftAns = left.first;

    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <=1;

 

    pair<bool, int> ans;

 

    ans.second = max(left.second, right.second) +1;

 

    if(leftAns && rightAns && diff){

        ans.first =  true;

    }

    else{

        ans.first =  false;

    }

 

    return ans;

}

 

bool isBalancedBT(TreeNode<int>* root){

    // Write your code here.

 

    return isBalancedBTFast(root).first;

}
    