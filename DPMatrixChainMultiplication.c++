#include <bits/stdc++.h> 
using namespace std;

// Function to compute the minimum cost of matrix multiplication
int f(int i, int j, vector<int> &arr, int n, vector<vector<int>> &dp) {
    // Base case: if there is only one matrix, no multiplication needed
    if (i == j)
        return 0;

    // If the result is already computed, return it
    if (dp[i][j] != -1)
        return dp[i][j];

    int mini = INT_MAX; // Initialize the minimum cost to a large value

    // Try all possible places to split the chain
    for (int k = i; k < j; k++) {
        // Compute the cost of multiplying matrices from i to k and from k+1 to j
        int steps = arr[i-1] * arr[k] * arr[j] + f(i, k, arr, n, dp) + f(k+1, j, arr, n, dp);
        // Update the minimum cost
        mini = min(mini, steps);
    }

    // Store and return the result
    return dp[i][j] = mini;
}

// Main function to be called for matrix chain multiplication
int matrixMultiplication(vector<int> &arr, int N) {
    // Create a DP table initialized with -1
    vector<vector<int>> dp(N, vector<int>(N, -1));
    // Call the recursive function with appropriate parameters
    return f(1, N-1, arr, N, dp);
}
