#include<iostream>
using namespace std;

int main() {
    int row, col;

    cout << "No. of rows you want to enter: ";
    cin >> row;

    cout << "No. of columns you want to enter: ";
    cin >> col;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == 1 || i == row || j == 1 || j == col) {
                cout << "*";
            } 
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
