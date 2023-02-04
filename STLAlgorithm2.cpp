#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initializing array values
    int arr[] = {30, 20, 5, 32, 24, 72, 42, 45, 30, 20, 5, 32, 24, 72, 42, 45, 20, 30, 55, 50, 72, 30, 45, 20, 23, 32, 24, 30, 5, 72, 42, 45, 30, 24, 32, 30, 20, 5, 42, 45, 30, 20, 5, 32, 24};
    int num = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + num);

    // Sort the array
    sort(vect.begin(), vect.end());
    cout << "\nVector after sorting is: ";
    for (int i = 0; i < num; ++i)
        cout << vect[i] << " ";

    // Returns the first occurence
    auto q = lower_bound(vect.begin(), vect.end(), 30);

    auto p = upper_bound(vect.begin(), vect.end(), 30);

    cout << "\nThe lower bound is at position: ";
    cout << q - vect.begin() << endl;

    cout << "\nThe upper bound is at position: ";
    cout << p - vect.begin() << endl;

    return 0;
}