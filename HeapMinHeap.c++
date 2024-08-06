#include <bits/stdc++.h> 

// min heap
void heapify(vector<int>& arr, int n, int i) {
    int smallest = i;
    int leftSubtree = 2 * i + 1;
    int rightSubtree = 2 * i + 2;
    if (leftSubtree < n && arr[smallest] > arr[leftSubtree])
        smallest = leftSubtree;
    if (rightSubtree < n && arr[smallest] > arr[rightSubtree])
        smallest = rightSubtree;
    if (smallest != i) {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    return arr;
}

    