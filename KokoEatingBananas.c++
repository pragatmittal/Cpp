class Solution {
public:
    // Function to find the maximum value in the vector
    int FindMax(vector<int>& v) {
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }

    // Function to calculate total hours required to eat all piles at a certain speed
    int calculatetotalhours(vector<int>& v, int hourly) {
        int totalHours = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalHours += ceil((double)v[i] / (double)hourly);
        }
        return totalHours;
    }

    // Function to find the minimum eating speed to finish piles within h hours
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = FindMax(piles);
        
        while (low < high) {
            int mid = (low + high) / 2;
            int totalHours = calculatetotalhours(piles, mid); // use piles, not v
            
            // Adjust search space based on total hours
            if (totalHours <= h)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
