/* File Handling with C++ using ifstream & ofstream */
/* To write the Content */
/* Read the content*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Creation of ofstream class object
    ofstream fout;

    string line;

    // by default ios::out mode, automatically deletes
    // th content of file. To append the content, open in ios::app
    // fout.open("sample.txt", ios::app)
    fout.open("sample1.txt");

    // Execute a loop If file successfully opened
    while (fout)
    {
        // Read a Line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << "This is a line" << endl;
    }
    // close the file
    fout.close();

    // creation of ifstream class object to read the file
    ifstream fin;

    // by default open mode = ios::in mode
    fin.open("sample1.txt");

    // Execute a loop until EOF
    while (fin)
    {
        // Read a Line from File
        getline(fin, line);

        // Print line in Console
        cout << line << endl;
    }
    // Close the file
    fin.close();

    return 0;
}