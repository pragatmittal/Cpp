class Solution {
public:
    static bool cmp(string &a,string &b)
    {
        if(a.size()==b.size())
        {
            return a<b;
        }
        return a.size()<b.size();
    }

string kthLargestNumber(vector<string>& nums, int k) {
    // Sort the array using the custom comparator
    sort(nums.begin(), nums.end(),cmp);
    int n=nums.size();
    return nums[n-k];

    // Return the k-th largest number
    // return nums[k - 1];
}
};