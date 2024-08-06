/*
    Time Complexity: O( N + M )
    Space Complexity: O( N + M )

    Where ‘N’ is the length of the given array 'arr1' and
    Where ‘M’ is the length of the given array 'arr2'.
*/

// This function will Heapify the subtree of node 'i' into Max-Heap.
void maxHeapify(vector<int> &arr, int i) {

    // Initialize the variable 'largest'.
    int largest = i;

    // Initialize the variable 'left'.
    int left = 2 * i + 1;

    // Initialize the variable 'right'.
    int right = 2 * i + 2;

    // Find largest element in current node and its left & right child and assign its index to variable 'largest'.
    if (left < arr.size() && arr[largest] < arr[left]) {

        largest = left;
    }

    if (right < arr.size() && arr[largest] < arr[right]) {
        
        largest = right;
    }

    swap(arr[largest], arr[i]);

    if (i != largest) {

        // Recursively call heapify in subtree.
        maxHeapify(arr, largest);
    }

    return;
}

vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {

    // Create an array 'merged' of length 'n + m'.
    vector<int> merged(n + m);

    // Copy the elements of 'arr1' and 'arr2' into 'merged'.
    for (int i = 0; i < (n + m); i++) {

        if (i < n) {

            merged[i] = arr1[i];
        }
        else {

            merged[i] = arr2[i - n];
        }
    }

    /* Heapify all the subtrees of array 'merged' into Max-heap, 
    starting in reverse order from '((n + m) / 2 - 1)' to '0'. */
    for (int i = ((n + m) / 2 - 1); i >= 0; i--) {

        maxHeapify(merged, i);
    }

    return merged;
}
