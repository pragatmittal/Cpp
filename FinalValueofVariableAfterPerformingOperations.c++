class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int xvalue=0 ;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="++X" || operations[i]=="X++")
                xvalue+=1;
        else xvalue-=1;            
        }

    return xvalue;        
    }

};
