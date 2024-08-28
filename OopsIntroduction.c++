#include<iostream>
#include<algorithm>
using namespace std;
class fruits{
    public:
    string  name;
    string color;

};

int main()
{
    fruits apple;
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" -- "<<apple.color<<endl;

    fruits *mango=new fruits();
    mango->name="Mango";
    mango->color="Yellow";
    cout<<mango->name<<" -- "<<mango->color<<endl;

    return 0;
}
