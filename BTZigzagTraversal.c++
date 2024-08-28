

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
/*
    Time Complexity  : O(N^2)
    Space Complexity : O(N)

    where N is the number of nodes in the binary tree
*/

#include <stack>

// Function to get maximum level of binary tree
int getMaxLevel(BinaryTreeNode<int>* curNode)
     // If curNode is NULL means depth of its subtree will be zero.
    if (curNode == NULL)
    {
        return 0;
    }

    // Find maximum depth of right subtree
    int leftSubtreeDepth = getMaxLevel(curNode -> left);

    // Find maximum depth of right subtree
    int rightSubtreeDepth = getMaxLevel(curNode -> right);

    // maximum level will be 1 + maximum of depth between left and right subtree
    return 1 + max(leftSubtreeDepth, rightSubtreeDepth);
}

/* Function to traverse a given level of a binary tree
  If direction is 0, we traverse left to right
  If direction is 1, we traverse right to left
*/
void traverseLevel(BinaryTreeNode<int>* curNode, vector<int>& answer, int curLevel, int targetLevel, int direction)
{
    // If cur node is NULL then return
    if (curNode == NULL)
    {
        return;
    }

    // If curLevel equals to target level then add data of node to answer
    if (curLevel == targetLevel)
    {
        answer.push_back(curNode -> data);
        return;
    }

    //  If direction is 0, we first go from left to right
    if (direction == 0)
    {
        traverseLevel(curNode -> left, answer, curLevel + 1, targetLevel, direction);
        traverseLevel(curNode -> right, answer, curLevel + 1, targetLevel, direction);
    }
    //  If direction is 1, we first go from right to left
    else
    {
        traverseLevel(curNode -> right, answer, curLevel + 1, targetLevel, direction);
        traverseLevel(curNode -> left, answer, curLevel + 1, targetLevel, direction);
    }
}

vector<int> zigZagTraversal(BinaryTreeNode<int>* root)
{
    // Declare array to store the zigzag traversal of the binary tree
    vector<int> answer;

    // Find the curLevel of the tree
    int maxLevel = getMaxLevel(root);

    //   Variable to keep track of traversing direction
    bool direction = 0;

    // Traverse each level in the tree
    for (int level = 1; level <= maxLevel; level++)
    {
        // Traverse the current level
        traverseLevel(root, answer, 1, level, direction);

        // Toggle the direction variable
        direction ^= 1;
    }

    // Return answer order
    return answer;
}