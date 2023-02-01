#include <iostream>
using namespace std;

class test
{
private:
    int a, x;

public:
    test(int a1)
    {
        a = a1;
    }
    test(const test &c2)
    {
        a = c2.a;
    }
    int getB()
    {
        return a;
    }
};

int main()
{
    test c1(6);   // Normal constructor is called here
    test c2 = c1; // copy constructor is called here
    cout << "c1.a = " << c1.getB() << endl;
    cout << "nc2.x = " << c2.getB() << endl;
}