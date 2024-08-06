/*

    Time Complexity : O(N)
    Space Complexity : O(N)

    where N is the number of nodes in the BST.

*/

BinaryTreeNode < int > * deleteNode(BinaryTreeNode < int > * root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key < root -> data) {
        root -> left = deleteNode(root -> left, key);
    } 
  
    else if (key > root -> data) {
        root -> right = deleteNode(root -> right, key);
    } 
  
    else {
        // Leaf node.
        if (root -> left == NULL && root -> right == NULL) {
            return NULL;
        }

        // Node doesn't have a left subtree.
        if (root -> left == NULL) {
            return root -> right;
        }

        // Node doesn't have a right subtree.
        if (root -> right == NULL) {
            return root -> left;
        }

        // Find the maximum value in the leftSubtree(predecessor).
        BinaryTreeNode < int > * leftSubtree = root -> left;

        while (leftSubtree -> right != NULL) {
            leftSubtree = leftSubtree -> right;
        }

        root -> data = leftSubtree -> data;

        // Delete the inorder predecessor.
        root -> left = deleteNode(root -> left, leftSubtree -> data);
    }

  return root;
}
