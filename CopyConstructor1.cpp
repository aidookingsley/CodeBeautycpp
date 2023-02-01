#include <iostream>
using namespace std;
class MyClass
{
private:
    int x;
    int y;

public:
    MyClass(int a, int b)
    {
        x = a;
        y = b;
    }
    // copy constructor
    MyClass(const MyClass &other)
    {
        x = other.x;
        y = other.y;
    }
    void print()
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};

int main(){
    MyClass obj1(10, 20);
    MyClass obj2 = obj1; // calls the copy constructor
    obj2.print();        
}
