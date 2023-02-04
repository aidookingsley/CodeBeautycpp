#include <iostream>
using namespace std;
class Abstraction
{
private:
    int number1, number2;

public:
    void set(int x, int y)
    {
        number1 = x;
        number2 = y;
    }
    void display()
    {
        cout << "number1 = " << number1 << endl;
        cout << "number2 = " << number2 << endl;
    }
};

int main()
{
    Abstraction obj;
    obj.set(20, 50);
    obj.display();
    
    return 0;
}
