// C++ code to demonstrate "to_string()" method 
// to convert number to string.
#include <iostream>
#include <string> // for string and to_string()
using namespace std;
int main(){
    // Declaring integer
    int i_val = 10;

    // Declaring float
    float f_val = 20.43;

    // Conversion of int into string using to_string()
    string stri = to_string(i_val);

    // Conversion of float into string using to_string()
    string strf = to_string(f_val);

    // Displaying the converted strings
    cout << "The integer in string: ";
    cout << stri << endl;
    cout << "The float in string: ";
    cout << strf << endl;

    return 0;
}