#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    // Initializing array values
    int arr[] = {20, 30, 15, 32, 54, 25};
    int num = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + num);

    cout << "Vector: ";
    for (int i = 0; i < num; ++i)
        cout << vect[i] << " ";

    // Sorting in Ascending order
    sort(vect.begin(), vect.end());

    cout << "\nVector after sorting is: ";
    for (int i = 0; i < num; ++i)
        cout << vect[i] << " ";

    // Reversing
    reverse(vect.begin(), vect.end());

    cout << "\nVector after reversing is: ";
    for (int i = 0; i < 6; ++i)
        cout << vect[i] << " ";

    cout << "\nMaximum element: ";
    cout << *max_element(vect.begin(), vect.end());

    cout << "\nMinimum element: ";
    cout << *min_element(vect.begin(), vect.end());

    return 0;
}