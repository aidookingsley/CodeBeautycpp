#include <iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout << *numberPtr << endl;
}
void printLetter(char *charPtr)
{
    cout << *charPtr << endl;
}
void print(void*ptr, char type){
    switch(type){
        case 'i':
            cout << *((int *)ptr) << endl;
            break; // handle int pointer
        case 'c':
            cout << *((char *)ptr) << endl;
            break; // handle char pointer
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');

    // int n = 5;
    // cout << &n << endl;
    // int *ptr = &n;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // *ptr = 10;
    // cout << *ptr << endl;
    // cout << n << endl;
    return 0;
}