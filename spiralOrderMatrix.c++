#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    // Input array elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end) {
        // Print top row
        for (int col = col_start; col <= col_end; col++) {
            cout << arr[row_start][col] << " \n";
        }
        row_start++;

        // Print last column
        for (int row = row_start; row <= row_end; row++) {
            cout << arr[row][col_end] << " \n";
        }
        col_end--;

        // Print last row
        for (int col = col_end; col >= col_start; col--) {
            cout << arr[row_end][col] << " \n";
        }
        row_end--;

        // Print first column
        for (int row = row_end; row >= row_start; row--) {
            cout << arr[row][col_start] << " \n";
        }
        col_start++;
    }

    return 0;
}
