// C++ code to demonstrate working of lexical_cast()

#include <iostream>
#include <boost/lexical_cast.hpp>
#include <string> //for string
using namespace std;
int main()
{
    string str = "4";
    string str1 = "4.5";

    // Initializing f_value with casted float
    // f_value is 4.5
    float f_value = boost::lexical_cast<float>(str1);

    // Initializing i_value with casted int
    // i_value is 5
    int i_value = boost::lexical_cast<int>(str);

    // Displaying casted values
    cout << "The float value after casting : ";
    cout << f_value << endl;
    cout << "The int value after casting : ";
    cout << i_value << endl;
    return 0;
}