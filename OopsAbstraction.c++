#include<iostream>
#include<algorithm>

using namespace std;
class abstraction{
    private:
    int a,b;
    public:
    void set(int x, int y){
        a=x;
        b=y;

    }
    void display(){
        cout<<"a = "<< a <<endl;
        cout<<"b = "<< b <<endl;

    }

};
int main()
{
    abstraction abj;
    abj.set(30,40);
    abj.display();


    return 0;
}