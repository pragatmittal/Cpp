class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m =g.size();
        int n=s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());


        int result= 0;
        for(int i=0, j=0;(i<m)&&(j<n);){
            if (s[j] >=g[i] )
                i++ ,j++, result++;
            else j++;
        }
        return result;
    }
};