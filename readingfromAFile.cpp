#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream new_file("../../Desktop/Daily_Planner.txt");
    if (new_file.is_open())
    {
        while (getline(new_file, line))
        {
            cout << line << endl;
        }
        new_file.close();
    }
    else
    {
        cout << "Unable to open file." << endl;
    }
    return 0;
}
