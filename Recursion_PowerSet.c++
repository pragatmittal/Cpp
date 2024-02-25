#include<iostream>
#include<algorithm>

using namespace std;
void GeneratePowerSet(const string& str , int index , string current){
    if(index==str.size()){
        cout<<"{"<<current<<"}"<<endl;
        return;

    }
GeneratePowerSet(str,index+1,current+str[index]);
GeneratePowerSet(str,index+1,current);
}
int main()
{
    string input;
    cout<<"enter string"<<endl;
    cin>>input;

    GeneratePowerSet(input,0,"");
    
    return 0;
}