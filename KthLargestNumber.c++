#include<iostream>
using namespace std;
int kthLargest(int arr[], int size, int k,int temp[]) {
  // Write your code here
  temp=arr;

  for(int i =0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(temp[i]>temp[j]){
            int tempe=temp[i];
            temp[i]=temp[j];
            temp[j]=tempe;

        }

    }
  }

 int array[]=new int[size];

for(int i =0;i<n;i++){
    array[i]=arr[size-i-1];
}
return array[k-1];
int main() {

}