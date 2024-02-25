#include<iostream>
#include<algorithm>

using namespace std;
bool checkPalindorme(string str, int i,int j ){
    // BASE CASE(1)
    if(i>j){
        return true; 
    // BASE CASE(2)
    }   
    if(str[i] != str [j]){
        return false;  
    }
    // RECURSION CALL
    else{
        return checkPalindorme(str,i+1,j-1);
    }
}
int main()
{
    string name= "bookkoob";
    cout<<endl;
    bool isPalindrome=checkPalindorme(name , 0,name.length()-1);
    if(isPalindrome)
        cout<<"PALINDROME YAYYYYYYYYY!!!!!!!"<<endl;
    else{
        cout <<"NOT PALIDROME AWWWWWWWW"<<endl;

    }


    return 0;
}
