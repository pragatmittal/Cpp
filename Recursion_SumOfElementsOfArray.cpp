#include<iostream>
#include<algorithm>

using namespace std;
int array_sum(int arr[],int size){
    //base case
    if (size==1)
        return arr[0];
    if (size==0)
        return 0;


    // recursive relation   
    int remaining_part=array_sum(arr+1,size-1);
    int sum = arr[0]+remaining_part;
    return sum; 

}
int main()
{
    int arr[5]={1,2,3,4,5 };
    int size=5;

    int sum = array_sum(arr,size );
    cout<<"the sum is "<<sum<<endl;

    return 0;
}