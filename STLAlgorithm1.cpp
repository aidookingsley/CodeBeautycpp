#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {30, 20, 5, 32, 24, 72, 51};
    int num = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + num);

    cout << "Occurences of 32 in vector : ";
    cout << count(vect.begin(), vect.end(), 32);

    // find() returns iterator to last address
    find(vect.begin(), vect.end(), 55) != vect.end() ? cout << "\nfound\n" : cout << "\nnot found\n";

    return 0;
}