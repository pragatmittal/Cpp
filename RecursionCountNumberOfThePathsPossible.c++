#include<iostream>
#include<algorithm>

using namespace std;
int Countnumberofthepaths(int s,int e){
    if(s==e){
        return 1;

    }

    if(s>e){
        return 0;
            }
    int count=0;
    for(int i=1;i<=6;i++){
        count += Countnumberofthepaths((s+i),e);
    }
    return count;
}

int main()
{
    cout<<"the number of paths possible from start point to end point from gameboard is "<<Countnumberofthepaths(0,3)<<endl;
    return 0;
}