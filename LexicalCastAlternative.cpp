//Conversion from one data type to the other...more appropriate
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string str = "4";
    string str1 = "4.5";

    // Convert str1 to float
    float f_value = atof(str1.c_str());

    // Convert str to int
    int i_value = atoi(str.c_str());

    double d_value = stod(str1.c_str());

    cout << "The float value after conversion: " << f_value << endl;
    cout << "The int value after conversion: " << i_value << endl;
    cout << "The double value after conversion: " << d_value << endl;
    return 0;
}
