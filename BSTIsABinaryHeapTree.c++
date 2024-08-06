#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
       public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
int countnodes(BinaryTreeNode<int>*root)
{
    if(root==NULL)
    return 0;
    int ans=1+countnodes(root->left)+countnodes(root->right);
    return ans;
}

bool iscbt(BinaryTreeNode<int>*root,int index,int cnt)
{
    if(root==NULL)
    return true;
    if(index>=cnt)
    return false;
    bool left=iscbt(root->left,2*index+1,cnt);
    bool right=iscbt(root->right,2*index+2,cnt);
    return(left&&right);
}

bool ismaxorder(BinaryTreeNode<int>*root)
{
    if(root->left==NULL&&root->right==NULL)
    {
      return true;
    }
    if(root->right==NULL)
    {
            return (root->data>root->left->data);
    }
    bool left=ismaxorder(root->left);
    bool right=ismaxorder(root->right);
    return(left&&right&&(root->data>=root->left->data)&&
    (root->data>=root->right->data));
}

bool isBinaryHeapTree(BinaryTreeNode<int>* root) 
{
    int index=0;
    int totalcount=countnodes(root);
    if(iscbt(root,index,totalcount)&&ismaxorder(root))
    return true;
    else
    return false;
}
























