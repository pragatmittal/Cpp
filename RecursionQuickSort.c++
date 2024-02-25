#include <iostream>
#include <algorithm>

using namespace std;

int partition(int arr[], int low, int high) {
    int pivotIndex = arr[(low + high) / 2];
    while (low <= high) {
        while (arr[low] < pivotIndex) {
            low++;
        }
        while (arr[high] > pivotIndex) {
            high--;
        }
        if (low <= high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    return low;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex, high);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    return 0;
}
