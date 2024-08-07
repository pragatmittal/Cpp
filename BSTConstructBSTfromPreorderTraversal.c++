/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*************************************************************/
/*
    Time Complexity: O(N)
    Space Complexity: O(N)

    Where N is the number of nodes in the tree.
*/

#include <climits>

TreeNode *util(vector<int> &preOrder, int &preIndex, int startRange, int endRange)
{

    // If the preIndex is greater the length of the array return None.
    if (preIndex >= preOrder.size())
    {
        return NULL;
    }

    int currNode = preOrder[preIndex];

    // If the current node lies inside the range then process the node.
    if (currNode > startRange && currNode < endRange)
    {
        TreeNode *root = new TreeNode(currNode);

        // Increase the index by 1.
        preIndex += 1;

        // If left node exists process left.
        if (preIndex < preOrder.size())
        {
            root->left = util(preOrder, preIndex, startRange, currNode);
        }
        // If right node exists process right.
        if (preIndex < preOrder.size())
        {
            root->right = util(preOrder, preIndex, currNode, endRange);
        }

        // Return the root.
        return root;
    }

    // If node was not processed return None.
    return NULL;
}

TreeNode *preOrderTree(vector<int> &preOrder)
{

    int preIndex = 0;

    // Return the util function.
    return util(preOrder, preIndex, INT_MIN, INT_MAX);
}