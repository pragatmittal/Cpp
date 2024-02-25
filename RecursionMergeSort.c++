#include<iostream>
#include<algorithm>

using namespace std;

void merge(int *arr, int startingPoint, int mid, int endingPoint) {
    int len1 = mid - startingPoint + 1;
    int len2 = endingPoint - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy data to temporary arrays first[] and second[]
    for (int i = 0; i < len1; i++) {
        first[i] = arr[startingPoint + i];
    }

    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i];
    }

    // Merge the two arrays back into arr[]
    int index1 = 0; // Initial index of first subarray
    int index2 = 0; // Initial index of second subarray
    int k = startingPoint; // Initial index of merged subarray

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }

    // Copy the remaining elements of first[], if there are any
    while (index1 < len1) {
        arr[k++] = first[index1++];
    }

    // Copy the remaining elements of second[], if there are any
    while (index2 < len2) {
        arr[k++] = second[index2++];
    }

    // Release the allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int startingPoint, int endingPoint) {
    // base case
    if (startingPoint >= endingPoint) {
        return;
    }

    // calculate mid point of array
    int mid = startingPoint + (endingPoint - startingPoint) / 2;

    // recursively sort the two halves
    mergeSort(arr, startingPoint, mid);
    mergeSort(arr, mid + 1, endingPoint);

    // merge the sorted halves
    merge(arr, startingPoint, mid, endingPoint);
}

int main() {
    int arr[5] = {34, 14, 36, 25, 17};
    int n = 5;

    // perform merge sort on the array
    mergeSort(arr, 0, n - 1);

    // display the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout<<endl;

    cout<<arr<<endl;

    cout << endl;

    return 0;
}
