#include <iostream>
using namespace std;

int main()
{
    int luckyNumbers[5] = {2, 3, 5, 7, 9};
    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;
    // cout << luckyNumbers[2] << endl;
    // cout << *(luckyNumbers + 2) << endl;
    // cout << &luckyNumbers[2] << endl;
    // cout << &(*(luckyNumbers + 2))<< endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << luckyNumbers[i] << endl
             << endl;
    }
    for (int i = 0; i <= 5; ++i)
    {
        cout << *(luckyNumbers + i) << endl;
    }
    return 0;
}