#include <iostream>
using namespace std;
int recursive_sum(int m, int n)
{
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}
// Sum numbers between m-n
int main()
{
    int m, n;
    cout << "Enter a min number: ";
    cin >> m;
    cout << "Enter a max number: ";
    cin >> n;
    cout << "Sum of all the numbers from the min to max = " << recursive_sum(m, n) << endl;

    // int sum = 0;
    // for (int i = m; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum = " << sum << endl;
}