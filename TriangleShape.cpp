#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int length;
    cout << "Enter Length: ";
    cin >> length;
    char symbol;
    cout << "Preferred symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    cout << endl
         << endl;

    for (int i = length; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}