
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> leftsmall(n);
        vector<int> rightsmall(n);

        // Calculate leftsmall array
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty()) {
                leftsmall[i] = st.top() + 1;
            } else {
                leftsmall[i] = 0;
            }
            st.push(i);
        }

        // Clear stack for rightsmall calculation
        while (!st.empty()) {
            st.pop();
        }

        // Calculate rightsmall array
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty()) {
                rightsmall[i] = st.top() - 1;
            } else {
                
                rightsmall[i] = n - 1;
            }
            st.push(i);
        }

        // Calculate the maximum area
        int maxy = 0;
        for (int i = 0; i < n; ++i) {
            maxy = max(maxy, heights[i] * (rightsmall[i] - leftsmall[i] + 1));
        }

        return maxy;
    }
};