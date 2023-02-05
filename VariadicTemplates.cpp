#include <iostream>
using namespace std;

void print()
{
    cout << endl;
}

template <typename D>
void print(const D &d)
{
    cout << d << endl;
}

template <typename First, typename... Rest>
void print(const First &first, const Rest &...rest)
{
    cout << first << ", ";
    print(rest...);
}

int main()
{
    print();  // calls first overload
    print(1); // calls second overload
    print(20, 30);
    print(200, 300, 400);
    print("second", 3, "fourth", 4.14139);
}