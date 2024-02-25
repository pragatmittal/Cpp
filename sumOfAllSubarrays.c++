#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    // cout<<"size[array]";
    cin>>n;

    int arr[n];
    cout<<"elements[array]";

    for(int i=0; i<n-1; i++) {
    cin>>arr[i];
    }
    int totalSum;

    for(int start=0;start<n;start++){
        int subarraySum =0;
        for ( int end=start;end<n;end++){
         
        subarraySum += arr[end];   


        totalSum += subarraySum;
        }
    }
    cout<<"sum of all arrays"<<totalSum<<endl;

    return 0;
}
