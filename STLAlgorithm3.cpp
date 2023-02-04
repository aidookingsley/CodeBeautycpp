#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    // Initializing vector with array values
    int arr[] = {30, 20, 5, 32, 24, 72, 42, 45, 30, 20, 5, 32, 24, 72, 42, 45, 20, 30, 55, 50, 72, 30, 45, 20, 23, 32, 24, 30, 5, 72, 42, 45, 30, 24, 32, 30, 20, 5, 42, 45, 30, 20, 15, 32, 24, 12, 23, 34, 56, 44, 55, 66, 77, 88, 99, 90, 80, 70, 60, 50, 40, 30, 20, 10, 11, 25, 35, 45, 65, 55, 75, 87, 98, 10};
    int num = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + num);

    cout << "The vector is : ";
    for (int i = 0; i < vect.size(); ++i)
        cout << vect[i] << " ";

    // Delete second element of vector
    vect.erase(vect.begin() + 1);

    cout << "\n\nVector after erasing element: ";
    for (int i = 0; i < vect.size(); ++i)
        cout << vect[i] << " ";

    // Sorting to enable use of unique()
    sort(vect.begin(), vect.end());
    cout << "\n\nVector after sorting: ";
    for (int i = 0; i < vect.size(); ++i)
        cout << vect[i] << " ";

    cout << "\n\nVector before removing duplicate "
            " occurrences: ";
    for (int i = 0; i < vect.size(); ++i)
        cout << vect[i] << " ";

    // Delete the duplicate occurrences
    vect.erase(unique(vect.begin(), vect.end()), vect.end());

    cout << "\n\nVector after deleting duplicates: ";
    for (int i = 0; i < vect.size(); ++i)
        cout << vect[i] << " ";

    return 0;
}