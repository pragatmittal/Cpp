#include<iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n];
    for (int i=0; i<n;i++){
        cin>>arr[i];

    }
    for (int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current)
        //move the element to one position ahead of its correct place
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        }
    for(int i=0;i<n; i++){
        cout << arr[i] << " ";

    }cout<<endl;
    
    return 0;
}
