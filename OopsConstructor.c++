#include<iostream>
#include<algorithm>

using namespace std;
class rectangle{
    public:
        int length;
        int breadth;
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    rectangle(rectangle & r){
        length=r.length;
        breadth=r.breadth;
    }
    ~rectangle(){
        cout<<"the destructor is called"<<endl;
    }
};
int main()
{
    rectangle r1;
    cout<<r1.length<<"___"<<r1.breadth<<endl;
    rectangle r2(3,4);
    cout<<r2.length<<"___"<<r2.breadth<<endl;
    rectangle r3=r2;
    cout<<r3.length<<"___"<<r3.breadth<<endl;
    

    return 0;
}