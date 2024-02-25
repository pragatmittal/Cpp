#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n) {
    cout << "size of the array is " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int linearSearch(int arr[], int size, int key) {
    print(arr, size);
    // base_value
    if (size == 0) {
        return false;
    }

    // recursive relation
    if (arr[0] == key) {
        return true;
    } else {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main() {
    int array[5] = {4, 7, 2, 5, 6};
    int size = 5;
    int key = 5;

    bool ans = linearSearch(array, size, key);
    if (ans) {
        cout << "Element is found" << endl;
    } else {
        cout << "Element is not found" << endl;
    }

    return 0;
}
