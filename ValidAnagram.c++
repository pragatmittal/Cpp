
    
   
class Solution {
    public:
        bool isAnagram(string s, string t) {
                int i,n1=s.size(),n2=t.size();
                        if(n1!=n2)
                                return 0;
                                        int a[26];
                                                int b[26];
                                                        for(i=0;i<n1;i++){
                                                                a[s[i]-'a']++;
                                                                        b[t[i]-'a']++;
                                                                                }
                                                                                        for(i=0;i<26;i++){
                                                                                                    if(a[i]!=b[i])
                                                                                                                return 0;
                                                                                                                        }
                                                                                                                                return 1;
                                                                                                                                    }
                                                                                                                                           };
                 

    