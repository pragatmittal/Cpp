class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,char >mapst,mapts;
        for(int i =0;i<s.length();i++){
            char original =s[i];
            char replace= t[i];

            if(mapst.find(original)!=mapst.end() ){
                if(mapst[original]!=replace)
                return false;

            }
            else{
                mapst[original]=replace;

            }

            if(mapts.find(replace)!=mapts.end()){
                if(mapts[replace]!=original)
                    return false;


            }
            else
            mapts[replace]= original;


        }
        return true;


    }
};