/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(T x) : data(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : data(x), left(left), right(right) {}
    };

************************************************************/
/*
    Time Complexity : O(N)
    Space Complexity : O(N)

    Where 'N' is the number of nodes in the given binary search tree.
*/

//	Stores the inorder traversal of the tree in "nodes".
void inorder(TreeNode<int> *root, vector<int> &nodes)
{
	if (root == NULL)
	{
		//	Base case.
		return;
	}

	//	Recur for the left subtree.
	inorder(root->left, nodes);

	//	Store the current node value in "nodes".
	nodes.push_back(root->data);

	//	Recur for the right subtree.
	inorder(root->right, nodes);
}

int kthSmallest(TreeNode<int> *root, int k)
{
	//	To store the inorder traversal of the BST.
	vector<int> nodes;

	inorder(root, nodes);

	return nodes[k - 1];
}
