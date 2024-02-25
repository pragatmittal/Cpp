#include<iostream>
#include<algorithm>

using namespace std;
void reverse(string &str, int i, int j ){ 
    
    cout<<"call received for "<< str <<endl;
    //base casee 

    if (i>j){
        return ;
     }
    swap(str[i],str[j]);
    i++;
    j--;
    
    //recursive function 
    reverse(str , i ,j);

   
}
int main()
{
    string name="Pragat is a good boy";
    cout<<endl; 
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}
