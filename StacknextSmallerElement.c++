#include <iostream> // Include the iostream header for cout
#include <vector>
#include <stack>
using namespace std; // Add using namespace std; to avoid needing to use std:: prefix

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (!s.empty() && s.top() >= curr) {
            s.pop();
        }
        if (s.empty()) {
            ans[i] = -1; // No smaller element found
        } else {
            ans[i] = s.top();
        }
        s.push(curr);
    }
    return ans;
}

int main() {
    // Example usage
    vector<int> arr = {4, 5, 2, 10, 8};
    int n = arr.size();
    vector<int> result = nextSmallerElement(arr, n);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " "; // Changed cout << result\[i\] << " "; to cout << result[i] << " ";
    }
    return 0;
}
