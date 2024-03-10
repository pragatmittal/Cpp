#include<iostream>
#include<algorithm>

using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"say hello to everyone"<<endl;
    }
    void sayHello(string person){
        cout<<"say hello to everyone pragat "<< person <<endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();


    return 0;
}