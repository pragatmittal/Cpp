#include<iostream>
#include<algorithm>

using namespace std;
class animal{
    public:
    void speak(){
        cout<<"you have to speak "<<endl;
    }
};
class dog : public animal{
    public:
        void speak(){
            cout<<"you have to bark"<<endl;
        }
            
};
int main()
{
    dog obj;
    obj.speak();

    return 0;
}