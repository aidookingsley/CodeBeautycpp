// C++ code to demonstrate string stream method 
// to convert number to string.
#include <iostream>
#include <sstream> // for string stream
#include <string>
using namespace std;
int main(){
    int num = 2023;

    // declaring output string stream ostringstream str1;
    ostringstream str1;

    // Sending a number as a stream into output string
    str1 << num;

    // the str() converts number into string
    string geek = str1.str();

    // Displaying the string
    cout << "Newly formed string from number is : ";
    cout << geek << endl;

    return 0;
}
