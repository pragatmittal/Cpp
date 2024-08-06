#include <vector>
#include <algorithm> // for sort
using namespace std;

class Solution {
public:
    // Recursive function to calculate maximum satisfaction
    int solve(vector<int>& satisfaction, int index, int time) {
        // Base case: if all items are considered
        if (index == satisfaction.size())
            return 0;
        
        // Calculate satisfaction if current item is included
        int include = satisfaction[index] * (time + 1) + solve(satisfaction, index + 1, time + 1);
        
        // Calculate satisfaction if current item is excluded
        int exclude = solve(satisfaction, index + 1, time);
        
        // Return the maximum of including and excluding current item
        return max(include, exclude);
    }
    
    // Function to find maximum satisfaction
    int maxSatisfaction(vector<int>& satisfaction) {
        // Sort satisfaction array in ascending order
        sort(satisfaction.begin(), satisfaction.end());

        // Start recursion from index 0 and time 1 (initial values)
        return solve(satisfaction, 0, 0);
    }
};
