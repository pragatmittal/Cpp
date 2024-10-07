class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;
        string st = "aeiouAEIOU";
        while(start<end){
            bool b1 = false;
            bool b2 = false;
            for(char ch: st){
                if(ch==s.at(start)) b1=true;
            }
            if(!b1){
                start++;
                continue;
            }
            for(char ch: st){
                if(ch==s.at(end)) b2=true;
            }
            if(!b2){
                end--;
                continue;
            }
            
            char temp = s.at(start);
            s.at(start) = s.at(end);
            s.at(end)= temp;
            start++;
            end--;
        }
        return s;
    }
};