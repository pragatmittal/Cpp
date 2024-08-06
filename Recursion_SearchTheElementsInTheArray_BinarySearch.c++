;


#include<iostream>
#include<algorithm>

using namespace std;

void print(int arr[], int s, int e) {
    for (int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool BinarySearch(int *arr, int s, int   e, int k) {
    print(arr, s, e);

    // base case
    if (s > e) {
        return false; // element is not found
    }

    int mid = s + (e - s) / 2;
    cout << "value of arr[mid] is " << arr[mid] << endl;

    if (arr[mid] == k)// element is found
        return true;

    if (arr[mid] < k) {
        return BinarySearch(arr, mid + 1, e, k);
    } 
    else {
        return BinarySearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // int size = 7;
    int key = 5;

    cout << "Present or not: " << BinarySearch(arr, 0 /*start*/, 6 /*end*/, key) << endl;

    return 0;
}
