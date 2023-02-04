// C++ code to demonstrate "lexical_ cast()" method 
// to convert number to string.
// This apprach is not safe
#include <boost/lexical_cast.hpp> 
#include<iostream>
#include <string> //for string
using namespace std;
int main(){
    //Declaring float
    float f_val = 8.5;

    //Declaring int
    int i_val = 14;

    //lexical_cast() converts a float into string
    string strf = boost::lexical_cast<string>(f_val);

    //lexical_cast() converts an int into string
    string stri = boost::lexical_cast<string>(i_val);

    //Displaying string converted numbers
    cout << "The float value in string: ";
    cout << strf << endl;
    cout << "The int value in string: ";
    cout << stri << endl;
    return 0;
}
