#include <iostream>
using namespace std;


    //Write your code here
int fact(int n){
    int factorial;
    if (n < 0) {
      return 0;
    }
    else if (n == 1 || n == 0) {
      return 1;
    }

    else {
      factorial = n * fact(n - 1);
      return factorial;
    }
}
int main(){
    int n,result;
    cin>>n;
    result=fact(n);
    if(result==0){
        cout<<"Error"<<endl;

    }
    else {
        cout<<result<<endl;
    }
    return 0;
}
