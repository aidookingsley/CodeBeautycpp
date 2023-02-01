#include <iostream>
using namespace std;
// void function1(){
//     cout << "Hello from function()" << endl;
// }

// int main(){
//     cout << "Hello from main()\n";
//     function1();
// }

void introduceMe(string name, string city, int age = 20)
{
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age != 0)
        cout << "I am " << age << " years old" << endl;
}

int main()
{
    // introduceMe("Adekyensroma", "New York", 23);
    // introduceMe("Oduahoma", "Atlanta");

    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;
    introduceMe(name, city, age);
}