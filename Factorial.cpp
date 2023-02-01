#include <iostream>
using namespace std;
int main()
{
    // The factorial of a number
    // 6!=1*2*3*4*5*6=720

    int number, factorial = 1;
    cout << "Number: ";
    cin >> number;
    if (number == 0 || number < 0)
        cout << "Invalid number, cannot calculate factorial";

    else
    {

        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        cout << number << "! = " << factorial;

        // ALTERNATIVE
        // 6!=6*5*4*3*2*1=720
        // for (int i = number; i >= 1; i--)
        // {
        //     factorial *= i;
        // }
        // cout << number << "! = " << factorial;
    }
}