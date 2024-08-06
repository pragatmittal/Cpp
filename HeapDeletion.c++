#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;
int arr[MAX_SIZE];
int size = 0;

void deletionFromHeap() {
    if (size == 0) {
        cout << "Nothing in the heap" << endl;
        return;
    }

    arr[1] = arr[size];
    size--;
    int i = 1;
    while (i < size) {
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        if (leftIndex<size && arr[i]<arr[leftIndex]) {
            swap(arr[i], arr[leftIndex]);
            i = leftIndex;
        } else if (rightIndex<size && arr[i]<arr[rightIndex]){
            swap(arr[i], arr[rightIndex]);
            i = rightIndex;
        } else {
            return;
        }
    }
}

int main() {
    // Example usage
    size = 7;
    arr[1] = 30;
    arr[2] = 20;
    arr[3] = 10;
    arr[4] = 15;
    arr[5] = 5;
    arr[6] = 12;
    arr[7] = 8;

    cout << "Before deletion: ";
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    deletionFromHeap();

    cout << "After deletion: ";
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
