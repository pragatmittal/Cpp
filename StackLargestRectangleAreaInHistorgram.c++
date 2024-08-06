#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangle(vector<int> &heights) {
    int n = heights.size();
    vector<int> next(n);
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = -1;
    for (int i = 0; i < n; i++) {
        int l = heights[i];
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    int result = largestRectangle(heights);
    cout << "Largest Rectangle Area: " << result << endl;
    return 0;
}
