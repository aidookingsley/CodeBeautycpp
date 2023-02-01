#include <iostream>
using namespace std;

void myFunction()
{
    int *ptr = new int[5];
    ptr[2] = 10;
    cout << "Hi, I am = " << ptr[2] << endl;
    delete[] ptr;
};

int main()
{
    myFunction();

    return 0;
}