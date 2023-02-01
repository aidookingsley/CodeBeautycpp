#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Local variable declaration:
    int a, b = 20;

    a = (b < 20) ? 30 : 50;
    cout <<"The value of a: "<<a<<endl;

    short s = 10;
    long i = 100000;
    float f = 20.47;

    cout << "sin (i) : " << sin(i) << endl;
    cout << "abs (f) : " << abs(f) << endl;
    return 0;
}