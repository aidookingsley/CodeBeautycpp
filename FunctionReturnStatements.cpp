#include <iostream>
using namespace std;

// bool isPrimeNumber(int number){
// bool isPrimeFlag = true;

// for (int i = 2; i < number; i++)
// {
//     if (number % i == 0)
//     {
//         isPrimeFlag = false;
//         break;
//     }
// }
// return isPrimeFlag;
// }
bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
int main()
{
    // int number;
    // cout << "Number: ";
    // cin >> number;
    // bool isPrimeFlag = isPrimeNumber(number);
    // if (isPrimeFlag)
    //     cout << "Prime number" << endl;
    // else
    //     cout << "Not prime number" << endl;
    int counter = 0;
    for (int i = 1; i <= 100000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << i << " is prime number\n";
            counter++;
        }
        else{
            cout << i << " is not a prime number\n";
        }
    }
    cout << counter << " Prime numbers are there from 1 to 100000" << endl;
}