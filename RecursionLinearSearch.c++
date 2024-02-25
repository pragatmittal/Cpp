#include<iostream>
#include<algorithm>

using namespace std;

void print(int arr[], int n) {
    cout << "the size of the array" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

bool LinearSearch(int arr[], int size, int key) {
    // Base case
    if (size == 0) {
        return false;
    }

    // Check if the current element is the key
    if (arr[0] == key) {
        return true;
    }

    // Recursive case: search in the remaining part of the array
    return LinearSearch(arr + 1, size - 1, key);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 5;
    int size = 5;
    bool ans = LinearSearch(arr, size, key);

    if (ans) {
        cout << "Present" << endl;
    } else {
        cout << "Not Present" << endl;
    }

    return 0;
}
