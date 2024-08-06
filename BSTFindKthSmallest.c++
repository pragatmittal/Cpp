#include <bits/stdc++.h> 
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
void inOrder(BinaryTreeNode<int>* root,vector<int>&v){
    if(root==NULL){
        return;
    }

    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right ,v);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    vector<int>v;
    inOrder(root, v);
    if(k>arr.size())
        return -1;
    else {
        return arr[k-1];
    } // Write your code here.
}