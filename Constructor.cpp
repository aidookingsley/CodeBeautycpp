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
    void print()
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};

int main(){
    MyClass obj(10, 20); // calls constructor with arguments 10 and 20
    obj.print();         // x: 10 y: 20
}
