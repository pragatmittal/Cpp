#include<iostream>
#include<algorithm>

using namespace std;

class B {
public:
    int a;
    int b;

public:
    int add() {
        return a + b;
    }

    void operator + (B& obj) {
        int value1 = this->a;
        int value2 = this->b;
        cout << "Output is " << value2 - value1 << endl;
    }

    // This is a commented-out function call operator overloading
    // void operator () () {
    //     cout << "mai bracket hun!" << this->a << endl;
    // }
};

int main() {
    B obj1, obj2;
    obj1.a = 4;
    obj2.b = 6;

    obj1 + obj2; // Calls the overloaded + operator

    // Uncomment the following line to call the overloaded () operator
    // obj1();

    return 0;
}
