class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size();
        if (n == 0)
            return 0;

        vector<int> left(n);  // Array to store the maximum height to the left of each index
        vector<int> right(n); // Array to store the maximum height to the right of each index

        // Fill the left max array
        left[0] = height[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i]);
        }

        // Fill the right max array
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i]);
        }

        // Calculate the total trapped water
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(left[i], right[i]) - height[i];
        }

        return ans;
    }
};
