#include<iostream>
#include<algorithm>

using namespace std;

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
    ans.first=max(op1,max(op2,op3));
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
int main()
{

    return 0;
}