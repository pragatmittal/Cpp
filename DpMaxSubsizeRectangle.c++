#include <bits/stdc++.h>
using namespace std;

int maximalArea(vector<vector<int>>& mat, int N, int M) {
    vector<int> height(M, 0);
    vector<int> left(M, 0);
    vector<int> right(M, M);
    
    int maxArea = 0;
    
    // Updating the height array
    for (int i = 0; i < N; ++i) {
        // Updating the height array for current row
        for (int j = 0; j < M; ++j) {
            if (mat[i][j] == 1)
                height[j]++;
            else
                height[j] = 0;
        }
        
        int boundary = 0;
        
        // Updating the left array
        for (int j = 0; j < M; ++j) {
            if (mat[i][j] == 1)
                left[j] = max(left[j], boundary);
            else {
                left[j] = 0;
                boundary = j + 1;
            }
        }
        
        boundary = M;
        
        // Updating the right array
        for (int j = M - 1; j >= 0; --j) {
            if (mat[i][j] == 1)
                right[j] = min(right[j], boundary);
            else {
                right[j] = M;
                boundary = j;
            }
        }
        
        // Updating the maximum area
        for (int j = 0; j < M; ++j) {
            maxArea = max(maxArea, height[j] * (right[j] - left[j]));
        }
    }
    
    return maxArea;
}


