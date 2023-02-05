#include <iostream>
using namespace std;

// To handle recursive Variadic function template
void print()
{
    cout << "Empty function and "
            "called at last\n";
}

// Variadic function takes variable number of arguments and prints
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1 << endl;

    print(var2...);
}

// Driver code
int main()
{
    print(2, 3, 4.14, "Pass any "
                      "number of arguments");
    return 0;
}