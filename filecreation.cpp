#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("sample2.txt", ios::out);
    if (!new_file)
    {
        cout << "creatiion failed";
    }
    else
    {
        cout << "New file created";
    }
    new_file << "learning is fun";
    new_file.close();
    return 0;
}