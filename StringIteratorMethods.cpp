// C++ code to demonstrate the working of 
// begin(), end(), rbegin(), rend()

#include <iostream>
#include <string>
using namespace std;
int main(){
    //Initializing string
    string str = "Adekyensroma";

    //Declaring iterator
    std::string::iterator it;

    //Declaring reverse iterator
    std::string::reverse_iterator it1;

    //Displaying string
    cout<<"String using forward iterators: ";
    for (it=str.begin(); it != str.end(); ++it)
    cout<<*it;
    cout<<endl;

    //Displaying reverse string
    cout<<"Reverse string using reverse iterators: ";
    for(it1=str.rbegin(); it1 != str.rend(); ++it1)
    cout<<*it1;
    cout<<endl;

    return 0;
}