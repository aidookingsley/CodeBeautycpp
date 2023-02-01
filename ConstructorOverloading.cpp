#include <iostream>
using namespace std;
class MyClass
{
private:
    int x;
    int y;

public:
    // default constructor
    MyClass()
    {
        x = 0;
        y = 0;
    }
    // parameterized constructor
    MyClass(int a)
    {
        x = a;
        y = 0;
    }
    // another parameterized constructor
    MyClass(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};

int main(){
    MyClass obj1; // calls the default constructor
    obj1.print(); // x: 0 y: 0

    MyClass obj2(10); // calls the first parameterized constructor
    obj2.print();     // x: 10 y: 0

    MyClass obj3(10, 20); // calls the second parameterized constructor
    obj3.print();         // x: 10 y: 20
}
