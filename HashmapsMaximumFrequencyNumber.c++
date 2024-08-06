#include<algorithm>
#include<unordered_map>
#include<vector>


int maximumFrequency(vector<int> &arr, int n)
{
    //firstly whos frequency is max
    //secondly what's the key of the  the maxfrequency guy 
    //Write your code here
   unordered_map<int,int>count;
   int maxfreq=0;X
   int maxvalue=0;
//    int nn=;

   for(int i =0;i<arr.size();i++){
       count[arr[i]]++;
      maxfreq=max(maxfreq,count[arr[i]]); 
   }
   for(int i=0;i<arr.size();i++){
      if (maxfreq == count[arr[i]]) {
        maxvalue = arr[i];
        break;
      }
   } 
   return maxvalue;
}
