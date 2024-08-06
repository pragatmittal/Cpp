#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int k = 0;
    for (int i = m; i < m + n && k < n; i++) {
        arr1[i] = arr2[k++];
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}

int main() {
    // Example usage:
    vector<int> arr1 = {1, 3, 5, 7, 0, 0, 0};
    vector<int> arr2 = {2, 4, 6};
    int m = 4; // size of arr1
    int n = 3; // size of arr2

    vector<int> result = ninjaAndSortedArrays(arr1, arr2, m, n);

    cout << "Merged and Sorted Array: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
