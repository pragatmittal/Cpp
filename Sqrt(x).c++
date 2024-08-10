class Solution {
public:
    int mySqrt(int x) {
      long int count=1; 
      while(count*count<=x){
        count++;
      }
        return count-1;

    }
};