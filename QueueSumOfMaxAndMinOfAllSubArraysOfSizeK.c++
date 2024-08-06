#include <bits/stdc++.h> 
using namespace std;


long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
    deque<int> maxi; // deque to store indices of maximum elements
    deque<int> mini; // deque to store indices of minimum elements
    
    long long ans = 0;
    
    // Process the first window of size k
    for(int i = 0; i < k; i++) {
        // Remove elements from the back of the deque that are smaller than or equal to the current element
        while (!maxi.empty() && nums[maxi.back()] <= nums[i])
            maxi.pop_back();
        while (!mini.empty() && nums[mini.back()] >= nums[i])
            mini.pop_back();
        
        // Add the index of the current element to the deque
        maxi.push_back(i);
        mini.push_back(i);
    }
    
    // Calculate the sum of maximum and minimum elements of the first window
    ans += nums[maxi.front()] + nums[mini.front()];
    
    // Process the rest of the array
    for(int i = k; i < n; i++) {
        // Remove elements from the front of the deque that are out of the current window
        while (!maxi.empty() && maxi.front() <= i - k)
            maxi.pop_front();
        while (!mini.empty() && mini.front() <= i - k)
            mini.pop_front();
        
        // Remove elements from the back of the deque that are smaller than or equal to the current element
        while (!maxi.empty() && nums[maxi.back()] <= nums[i])
            maxi.pop_back();
        while (!mini.empty() && nums[mini.back()] >= nums[i])
            mini.pop_back();
        
        // Add the index of the current element to the deque
        maxi.push_back(i);
        mini.push_back(i);
        
        // Add the sum of maximum and minimum elements of the current window to the answer
        ans += nums[maxi.front()] + nums[mini.front()];
    }
    
    return ans;
}
