void heapify(vector<int>&arr,int n,int i)

{

    int smallest = i;

    int left = i*2+1;

    int right = i*2 +2;

    if(left<n && arr[left]<arr[smallest])

    {

        smallest = left;

    }

    if(right<n && arr[right]<arr[smallest])

    {

        smallest = right;

    }

    if(smallest!=i)

    {

        swap(arr[smallest],arr[i]);

        heapify(arr,n,smallest);

    }

}

void inorder(BinaryTreeNode *root, vector<int>&arr)

{

    if(root==NULL)

    {

        return;

    }

    inorder(root->left,arr);

    arr.push_back(root->data);

    inorder(root->right,arr);

}

void fillwithpreorder(BinaryTreeNode *root,vector<int>&arr,int &i)

{

    if(root==NULL)

    {

        return;

    }

    root->data = arr[i++];

    fillwithpreorder(root->left,arr,i);

    fillwithpreorder(root->right,arr,i);

}

BinaryTreeNode* convertBST(BinaryTreeNode* root)

{

    // Write your code here.

    vector<int>arr;

    inorder(root,arr);

    int n = arr.size();

    for(int i=n/2-1; i>=0; i--)

    {

        heapify(arr,n,i);

    }

    int i=0;

    fillwithpreorder(root,arr,i);

    return root;

}