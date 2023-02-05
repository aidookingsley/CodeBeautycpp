#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // Initializing array values
    int arr[] = {30, 20, 5, 32, 24, 12, 42, 5};
    int num = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + num);

    // Return distance of first to maximum element
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(), max_element(vect.begin(), vect.end()));

    return 0;
}