#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int count(int x) {
    int count1 = 0;
    int result = 0;
    int original = x;
    while(original!=0){
        original/=10;
        count1++;
    }
    original=x;
    while (original != 0) {
        int rem = original % 10;
        result += power(rem, count1);
        original /= 10;
    }
    return result;
}

bool isArmstrong(int num) {
    int result = count(num);
    return (result == num);
}
