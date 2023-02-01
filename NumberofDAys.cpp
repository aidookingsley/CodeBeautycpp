#include <iostream>
using namespace std;
int main()
{
    // leap year formula
    //(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    int year, month;
    cout << "Year, month: ";
    cin >> year >> month;
    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "Feb has 29 days month." : cout << "Feb has 28 days month.";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days month.";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 Days month.";
        break;
    default:
        cout << "Not valid!";
    }
}