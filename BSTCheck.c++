#include <bits/stdc++.h> 

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
pair<bool, int> isSumtree(TreeNode<int> *root) {

  if (root == NULL) {

    pair<bool, int> p = make_pair(true, 0);

    return p;

  }

  if (root->left == NULL && root->right == NULL) {

    pair<bool, int> p = make_pair(true, root->val);

    return p;

  }

 

  pair<bool, int> left = isSumtree(root->left);

  pair<bool, int> right = isSumtree(root->right);

 

  bool isleftSum = left.first;

  bool isrightSum = right.first;

 

  int leftsum = left.second;

  int rightsum = right.second;

 

  bool cond = root->val == leftsum + rightsum;

 

  pair<bool, int> ans;

 

  if (isleftSum && isrightSum && cond) {

    ans.first = true;

    ans.second = root->val + leftsum + rightsum;

  } else {

    ans.first = false;

  }

  return ans;

}

 

bool isSumTree(TreeNode <int>*root) {

  // Write your code here.

  return isSumtree(root).first;

}