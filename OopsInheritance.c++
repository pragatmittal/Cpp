#include<iostream>
#include<algorithm>

using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(int a ){
        this->age=a;
   }
    int getWeight(int w ){
        this->weight=w;
    }
};
class male:public human{
    public:
    string color;
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
};
int main()
{
    male object1;

    cout<<object1.height<<endl;
    cout<<object1.getWeight(70)<<endl;
    cout<<object1.getAge(40)<<endl;


    cout<<"Saavla rang h chore ka "<<object1.color<<endl;
    
    object1.sleep();
    
    // cout<<object1.setWeight(82)<<endl;

    return 0;
}