#include<iostream>
#include<algorithm>

using namespace std;

void SayDigits(int n, string arr[]) {
    if (n == 0) {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    SayDigits(n, arr);  // Move the recursive call before printing

    cout << arr[digit] << endl;
}

int main() {
    string arr[10] = {"zero", "one", "two", "third", "four", "fivth", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    SayDigits(n, arr);

    return 0;
}
