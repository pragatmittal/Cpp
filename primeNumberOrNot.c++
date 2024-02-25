#include<iostream>
#include<cmath>  // Include the cmath header for the sqrt function

using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = 0;

    // Check for special cases
    if (n <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            flag = 1;
            break;
        }
    }

    if (!flag) {
        cout << "Prime" << endl;
    }

    return 0;
}
