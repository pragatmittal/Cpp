#include<iostream>
using namespace std;
int main()
{
    // cout<<"firststring"<<endl;
    // string str;
    // cin>>str;
    // cout<<str;
    //2 
    // cout<<"secondstring"<<endl;
    // // string str;
    // string str(5,'p');
    // cout<<str<<endl;
    //3
    // cout<<"thirdstring"<<endl;
    // string str3="Prag Ai";
    // cout<<str3<<endl;
    // //4
  string user_name; // declaring variable   

    // taking user input with cin

    std::cout << "What is your name? :" << std::endl;

        // using getline

    getline(cin, user_name, ' ');

    cout<<"\nWelcome to Simplilearn "<<user_name;
    return 0;
}