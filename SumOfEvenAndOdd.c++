#include <iostream>
using namespace std;

int main() {
    int n,evenSum=0,oddSum=0;//(1) int n is basically the number which we are inputing and getting the sum of that even and odd , counter variable initialization for even sum and odd sum 
    cin>>n;//inputting 
    while(n!=0){//jabtak n 0 nhi hota tabtak 
        int digit=n%10;//extract the rightmost digit and stores it in digit number
        if(digit&1){//basically it is checking that the rightest bit is 1 or not 
            oddSum+=digit;//if that digit is 1 then add to that counter variable oddSUm because that 1(rightest ) bit representing the odd number  

        }
        else{//else we have only one option left i.ethe number is even 
            evenSum+=digit;// then add to the counter variable evenSum and store it to that counter variable.
        }
        n/=10;//n=n/10

    }
    //Write your code here
        cout<<evenSum<<" "<<oddSum;
    return 0;
}