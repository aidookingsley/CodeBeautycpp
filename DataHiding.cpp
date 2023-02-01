#include <iostream>
using namespace std;
class Base1{
    int number;   //by default private
    public:
        void read();
        void print();
};

void Base1::read(){
        cout << "Enter value" << endl;
        cin >> number;
}

void Base1::print(){
        cout << "Value is " << number << endl;
}

int main(){
        Base1 object;
        object.read();
        object.print();

        return 0;
}