class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1);  // Initialize the result array with -1
        stack<int> st;  // Stack to keep indexes of elements
        
        // We traverse the array twice due to its circular nature
        for (int i = 2 * n - 1; i >= 0; i--) {
            // Use the modulo operator to get the actual index in nums
            int currentIndex = i % n;
            
            // Pop elements from the stack that are less than or equal to the current element
            while (!st.empty() && nums[st.top()] <= nums[currentIndex]) {
                st.pop();
            }
            
            // If we are in the first pass (original size of array), set the result for nge
            if (i < n) {
                if (!st.empty()) {
                    nge[currentIndex] = nums[st.top()];
                }
            }
            
            // Push the current index to the stack
            st.push(currentIndex);
        }
        
        return nge;
    }
};
