// C++ code to demonstrate the working of 
// capacity(), resize() and shrink_to_fit()
#include <iostream>
#include <string> // for string class
using namespace std;
int main(){
    //Initializing string
    string str = "Adekyensroma is my favorite child";

    //Displaying string
    cout<<"Initial string: ";
    cout<<str<<endl;


    //Resizing string using resize()
    str.resize(13);

    //Displaying string
    cout<<"String after resize operation : ";
    cout<<str<<endl;

    //Displaying capacity of string
    cout<<"Capacity of string: ";
    cout<<str.capacity()<<endl;

    //Displaying length of the string
    cout<<"Length of the string: "<<str.length()<<endl;

    //Decreasing the capacity of string using shrink_to_fit()
    str.shrink_to_fit();

    cout<<"New capacity of string: "<<str.capacity()<<endl;
    cout<<"New length of string: "<<str.length()<<endl;
    return 0;
}